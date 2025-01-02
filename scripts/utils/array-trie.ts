import { RadixTree } from "./radix-tree.js";

export class ArrayTrieData {
  prefixRaw: Uint32Array;
  prefixIndexes: Uint8Array;
  prefixSizes: Uint8Array;
  iP1s: Uint8Array;
  sizes: Uint8Array;
  values: Uint8Array;
  rootSize: number;

  getEdgeIdxP1(iP1: number, label: number): number {
    let left: number, right: number;
    if (iP1 === 0) {
      left = 0;
      right = this.rootSize;
    } else {
      left = this.iP1s[iP1 - 1] - 1;
      right = this.sizes[iP1 - 1] + left;
    }
    while (left < right) {
      const mid = Math.floor((left + right) / 2);
      if (this.prefixRaw[this.prefixIndexes[mid]] >= label) right = mid;
      else left = mid + 1;
    }
    return this.prefixRaw[this.prefixIndexes[left]] === label ? left + 1 : 0;
  }
}

export class ArrayTrie extends ArrayTrieData {
  static fromRadixTree(t: RadixTree): ArrayTrie {
    const prefixRaw = Uint32Array.from(getPrefixArray(t));
    const [prefixIndexes, prefixSizes] = getPrefixData(t, prefixRaw);
    const [indexes, sizes, values] = getEdgesData(t);
    const trie = new ArrayTrie();
    trie.prefixRaw = prefixRaw;
    trie.prefixIndexes = prefixIndexes;
    trie.prefixSizes = prefixSizes;
    trie.iP1s = indexes;
    trie.sizes = sizes;
    trie.values = values;
    trie.rootSize = t.root.edges.length;
    return trie;
  }

  get(s: string): [number, boolean] {
    let search = s;
    let iP1 = 0;
    while (true) {
      if (search.length === 0) {
        if (this.values[iP1 - 1] > 0) return [this.values[iP1 - 1], true];
        break;
      }

      iP1 = this.getEdgeIdxP1(iP1, search.charCodeAt(0));
      if (iP1 === 0) break;

      if (this.checkPrefix(iP1 - 1, search))
        search = search.slice(this.prefixSizes[iP1 - 1]);
      else break;
    }
    return [0, false];
  }

  private checkPrefix(i: number, s: string): boolean {
    const prefixIdx = this.prefixIndexes[i];
    const prefixSize = this.prefixSizes[i];

    if (s.length < prefixSize) return false;

    for (let i = 0; i < prefixSize; i++) {
      if (s.codePointAt(i) !== this.prefixRaw[prefixIdx + i]) return false;
    }
    return true;
  }
}

function getPrefixArray(t: RadixTree): number[] {
  const prefixes: string[] = [];
  const q = [...t.root.edges];
  while (q.length > 0) {
    const e = q.shift();
    if (e) {
      q.push(...e.node.edges);
      prefixes.push(e.node.prefix);
    }
  }
  function overlap(arr1: number[], arr2: number[]) {
    let maxOverlap = 0;
    const len1 = arr1.length;
    const len2 = arr2.length;

    // Check for overlap from the end of arr1 to the start of arr2
    for (let i = 1; i <= Math.min(len1, len2); i++) {
      if (JSON.stringify(arr1.slice(-i)) === JSON.stringify(arr2.slice(0, i))) {
        maxOverlap = i;
      }
    }
    return maxOverlap;
  }

  function mergeArrays(arrays: number[][]) {
    while (arrays.length > 1) {
      let maxOverlap = -1;
      let bestPair = [0, 0];

      // Find the pair of arrays with the maximum overlap
      for (let i = 0; i < arrays.length; i++) {
        for (let j = 0; j < arrays.length; j++) {
          if (i !== j) {
            const currentOverlap = overlap(arrays[i], arrays[j]);
            if (currentOverlap > maxOverlap) {
              maxOverlap = currentOverlap;
              bestPair = [i, j];
            }
          }
        }
      }

      // Merge the best pair of arrays
      const [i, j] = bestPair;
      const mergedArray = arrays[i].concat(arrays[j].slice(maxOverlap));
      // Remove the merged arrays and add the new one
      arrays.push(mergedArray);
      arrays.splice(Math.max(i, j), 1); // Remove the larger index first
      arrays.splice(Math.min(i, j), 1); // Then remove the smaller index
    }

    return arrays[0] || [];
  }

  return mergeArrays(
    prefixes.map((x) => [...Uint32Array.from(x, (c) => c.codePointAt(0)!)]),
  );
}

function getEdgesData(t: RadixTree): [Uint8Array, Uint8Array, Uint8Array] {
  const indexes: number[] = [];
  const sizes: number[] = [];
  const values: number[] = [];

  let i = 1 + t.root.edges.length;

  const q = [t.root.edges];
  while (q.length > 0) {
    const es = q.shift()!;
    for (const e of es) {
      q.push(e.node.edges);
      const len = e.node.edges.length;
      values.push(e.node.leaf ?? 0);
      if (len > 0) {
        indexes.push(i);
        sizes.push(len);
        i += len;
      } else {
        indexes.push(0);
        sizes.push(0);
      }
    }
  }
  return [
    Uint8Array.from(indexes),
    Uint8Array.from(sizes),
    Uint8Array.from(values),
  ];
}

function getPrefixData(
  t: RadixTree,
  prefixRaw: Uint32Array,
): [Uint8Array, Uint8Array] {
  const indexes: number[] = [];
  const sizes: number[] = [];

  const q = [t.root.edges];
  while (q.length > 0) {
    const es = q.shift()!;
    for (const e of es) {
      q.push(e.node.edges);
      const prefixArray = Uint32Array.from(
        e.node.prefix,
        (x) => x.codePointAt(0)!,
      );
      if (prefixArray.length > 0) {
        indexes.push(searchArray(prefixRaw, prefixArray));
        sizes.push(prefixArray.length);
      } else {
        indexes.push(0);
        sizes.push(0);
      }
    }
  }

  return [Uint8Array.from(indexes), Uint8Array.from(sizes)];
}

function searchArray(search: Uint32Array, array: Uint32Array): number {
  for (let i = 0; i < search.length - array.length + 1; i++) {
    let count = 0;
    for (let j = 0; j < array.length; j++) {
      if (search[i + j] !== array[j]) break;
      count++;
    }
    if (count === array.length) return i;
  }
  return -1;
}
