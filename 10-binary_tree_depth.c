
#include "binary_trees.h"
/**
 * binary_tree_depth - return depth of binary tree
 * @tree: binary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	int depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
