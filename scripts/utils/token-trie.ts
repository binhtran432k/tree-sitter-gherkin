import { ArrayTrieData } from "./array-trie.js";

export class TokenTrie {
  trieData: ArrayTrieData;
  iP1: number;
  step: number;
  value: number | null;
  stopped: boolean;

  constructor(trieData: ArrayTrieData) {
    this.trieData = trieData;
    this.iP1 = 0;
    this.step = 0;
    this.value = null;
    this.stopped = false;
  }

  advance(token: number): void {
    if (this.step === 0) {
      this.iP1 = this.trieData.getEdgeIdxP1(this.iP1, token);
      if (this.iP1 === 0) {
        this.value = null;
        this.stopped = true;
        return;
      }
      this.step = this.trieData.prefixSizes[this.iP1 - 1];
    }

    const prefixSize = this.trieData.prefixSizes[this.iP1 - 1];
    const prefixIdx =
      prefixSize - this.step + this.trieData.prefixIndexes[this.iP1 - 1];

    if (this.trieData.prefixRaw[prefixIdx] === token) {
      this.step -= 1;
    } else {
      this.value = null;
      this.stopped = true;
      return;
    }

    const value = this.trieData.values[this.iP1 - 1];
    this.value = this.step === 0 && value > 0 ? value : null;
  }
}
