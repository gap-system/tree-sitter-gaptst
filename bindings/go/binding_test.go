package tree_sitter_gaptst_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/gap-system/tree-sitter-gaptst"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gaptst.Language())
	if language == nil {
		t.Errorf("Error loading gaptst grammar")
	}
}
