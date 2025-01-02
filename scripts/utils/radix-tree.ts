type RadixLabel = number;
type RadixLeaf = number;

interface RadixEdge {
  label: RadixLabel;
  node: RadixNode;
}

class RadixNode {
  leaf: RadixLeaf | null;
  prefix: string;
  edges: RadixEdge[];

  constructor(leaf: RadixLeaf | null, prefix: string) {
    this.leaf = leaf;
    this.prefix = prefix;
    this.edges = [];
  }

  addEdge(e: RadixEdge): void {
    const idx = sortSearch(
      this.edges.length,
      (i) => this.edges[i].label >= e.label,
    );
    if (idx === this.edges.length - 1 && this.edges[idx].label <= e.label) {
      this.edges.push(e);
    } else {
      this.edges = [...this.edges.slice(0, idx), e, ...this.edges.slice(idx)];
    }
  }

  updateEdge(label: RadixLabel, node: RadixNode) {
    const idx = sortSearch(
      this.edges.length,
      (i) => this.edges[i].label >= label,
    );
    if (idx < this.edges.length && this.edges[idx].label === label) {
      this.edges[idx].node = node;
      return;
    }
    throw new Error("Replacing missing edge");
  }

  getEdge(label: RadixLabel): RadixNode | null {
    const idx = sortSearch(
      this.edges.length,
      (i) => this.edges[i].label >= label,
    );
    if (idx < this.edges.length && this.edges[idx].label === label) {
      return this.edges[idx].node;
    }
    return null;
  }
}

export class RadixTree {
  root: RadixNode;
  size: number;

  constructor() {
    this.root = new RadixNode(null, "");
    this.size = 0;
  }

  insert(s: string, v: RadixLeaf): [RadixLeaf | null, boolean] {
    let parent: RadixNode | null;
    let n: RadixNode | null = this.root;
    let search = s;
    while (true) {
      if (s.length === 0) {
        if (n?.leaf) {
          const old = n.leaf;
          n.leaf = v;
          return [old, true];
        }
        if (n) {
          n.leaf = v;
        }
        this.size++;
        return [null, false];
      }

      parent = n;
      n = n.getEdge(search.codePointAt(0));

      if (!n) {
        parent?.addEdge({
          label: search.codePointAt(0),
          node: new RadixNode(v, search),
        });
        this.size++;
        return [null, false];
      }

      // Determine longest prefix of search key on match
      const commonPrefix = longestPrefix(search, n.prefix);
      if (commonPrefix === n.prefix.length) {
        search = search.slice(commonPrefix);
        continue;
      }

      // Split the code
      this.size++;
      const child = new RadixNode(null, search.slice(0, commonPrefix));
      parent?.updateEdge(search.codePointAt(0), child);

      // Restore the existing node
      child.addEdge({ label: n.prefix.codePointAt(commonPrefix), node: n });
      n.prefix = n.prefix.slice(commonPrefix);

      // Create a new leaf node
      const leaf = v;

      // If the new key is a subset, add to this node
      search = search.slice(commonPrefix);
      if (search.length === 0) {
        child.leaf = leaf;
        return [null, false];
      }

      // Create a new edge for the node
      child.addEdge({
        label: search.codePointAt(0),
        node: new RadixNode(leaf, search),
      });
      return [null, false];
    }
  }

  get(s: string): [RadixLeaf | null, boolean] {
    let n: RadixNode | null = this.root;
    let search = s;
    while (true) {
      if (search.length === 0) {
        if (n?.leaf) {
          return [n.leaf, true];
        }
        break;
      }

      n = n.getEdge(search.codePointAt(0));
      if (!n) break;

      if (search.startsWith(n.prefix)) search = search.slice(n.prefix.length);
      else break;
    }
    return [null, false];
  }
}

function longestPrefix(k1: string, k2: string): number {
  const max = Math.max(k1.length, k2.length);
  for (let i = 0; i < max; i++) if (k1[i] !== k2[i]) return i;
  return 0;
}

function sortSearch(size: number, func: (i: number) => boolean): number {
  let left = 0;
  let right = size;
  while (left < right) {
    const mid = Math.floor((left + right) / 2);
    if (func(mid)) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }
  return left;
}
