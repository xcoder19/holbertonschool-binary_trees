

#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves
 * @tree: tree
 * Return: leave count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);

	return (count);
}
