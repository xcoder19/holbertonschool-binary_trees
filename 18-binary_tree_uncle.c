
#include "binary_trees.h"
/**
 * binary_tree_uncle - finds node's uncle
 * @node: node
 * Return: node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != NULL && node->parent->parent->left == node->parent && node->parent->parent->right != NULL)
		return (node->parent->parent->right);

	if (node->parent->parent->right != NULL && node->parent->parent->right == node->parent && node->parent->parent->left != NULL)
		return (node->parent->parent->left);

	return (NULL);
}
