
#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: tree
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	flag = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

	return (flag);
}
