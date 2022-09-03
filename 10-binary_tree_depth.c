
#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	int depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
