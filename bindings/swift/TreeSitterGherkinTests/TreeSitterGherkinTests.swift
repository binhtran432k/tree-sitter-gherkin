import XCTest
import SwiftTreeSitter
import TreeSitterGherkin

final class TreeSitterGherkinTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gherkin())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Gherkin grammar")
    }
}
