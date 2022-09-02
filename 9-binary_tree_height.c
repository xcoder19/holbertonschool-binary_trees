#include "binary_trees.h"
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHight, rightHight;
	if (tree == NULL)
		return (0);

	leftHight = binary_tree_height(tree->left);
	rightHight = binary_tree_height(tree->right);

	return (1 + MAX(leftHight, rightHight));
}