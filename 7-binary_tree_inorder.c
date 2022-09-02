
#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse inorder
 * @tree: tree
 * @func: func
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left);

	printf("n=%d\n", tree->n);

	binary_tree_inorder(tree->right);
}
