#include "binary_trees.h"
/**
 * binary_tree_height - binary tree height
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHight, rightHight;

	if (tree == NULL)
		return (0);

	leftHight = binary_tree_height(tree->left);
	rightHight = binary_tree_height(tree->right);

	if (leftHight > rightHight)
	{
		return (leftHight + 1);
	}
	else
	{
		return (rightHight + 1);
	}
}
