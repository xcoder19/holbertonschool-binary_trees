#include "binary_trees.h"
/**
 * binary_tree_height - binary tree height
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lHight;
	int rHight;

	if (tree == NULL)
		return (-1);

	lHight = binary_tree_height(tree->left);
	rHight = binary_tree_height(tree->right);

	if (lHight > rHight)
		return (lHight + 1);
	else
		return (rHight + 1);
}
