#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes
 * @tree: tree
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count = binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1;

	return (count);
}
