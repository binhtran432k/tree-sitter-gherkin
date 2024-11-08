package tree_sitter_gherkin_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gherkin "github.com/tree-sitter/tree-sitter-gherkin/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gherkin.Language())
	if language == nil {
		t.Errorf("Error loading Gherkin grammar")
	}
}