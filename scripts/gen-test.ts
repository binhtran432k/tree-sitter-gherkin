import type { BunFile } from "bun";
import { readdir } from "node:fs/promises";

const gherkinUrl = new URL(
  "node_modules/gherkin/",
  Bun.pathToFileURL(__dirname),
);
const goodUrl = new URL("testdata/good/", gherkinUrl);
const badUrl = new URL("testdata/bad/", gherkinUrl);
const testUrl = new URL("test/corpus/", Bun.pathToFileURL(__dirname));

const goods = await readdir(goodUrl);
const bads = await readdir(badUrl);

const goodFeatures = goods.filter((x) => x.endsWith(".feature"));
const badFeatures = bads.filter((x) => x.endsWith(".feature"));

async function generateTest(name: string, files: BunFile[]): Promise<void> {
  const tests = await Promise.all(
    files.map(async (f) => {
      const content = await f.text();
      return ["===", getTestTitle(f.name), "===", content, "---", "(document)"];
    }),
  );
  Bun.write(getTestUrl(name), tests.flat().join("\n"));
}

function getTestTitle(name: string): string {
  const splittedPaths = name.split("/");
  const [fileName] = splittedPaths[splittedPaths.length - 1].split(".");
  return fileName
    .split("_")
    .map(([x, ...xs]) => [x.toUpperCase(), ...xs].join(""))
    .join(" ");
}

function getTestUrl(name: string): URL {
  const [fileName] = name.split(".");
  return new URL(`${fileName}.txt`, testUrl);
}

function buildTests(): Record<string, BunFile[]> {
  const groupNameSet = new Set([
    "background",
    "datatables",
    "minimal",
    "example",
    "scenario",
    "rule",
    "feature",
    "i18n",
  ]);
  const tests: Record<string, BunFile[]> = {};
  for (const feature of goodFeatures) {
    const [featureName] = feature.split(".");
    let name = featureName;
    if (featureName.includes("pipe") || featureName.includes("table")) {
      name = "datatables";
    } else if (featureName.includes("language")) {
      name = "i18n";
    } else if (featureName === "empty") {
      name = "minimal";
    } else {
      for (const groupName of groupNameSet) {
        if (featureName.includes(groupName)) {
          name = groupName;
          break;
        }
      }
    }
    if (tests[name] === undefined) tests[name] = [];
    tests[name].push(Bun.file(new URL(feature, goodUrl)));
  }
  for (const feature of badFeatures) {
    const [featureName] = feature.split(".");
    let name = "error";
    if (featureName.includes("language")) {
      name = "i18n";
    } else if (featureName.includes("cell")) {
      name = "datatables";
    }
    if (tests[name] === undefined) tests[name] = [];
    tests[name].push(Bun.file(new URL(feature, badUrl)));
  }
  return tests;
}

async function main(): Promise<void> {
  // Clean Test
  await Bun.$`rm -rf test/corpus`;

  const tests = buildTests();
  for (const [test, files] of Object.entries(tests)) {
    await generateTest(test, files);
  }

  // Update Test Result
  await Bun.$`tree-sitter test -u -r --overview-only`.catch(() => {});
}

if (import.meta.main) {
  await main();
}
