#include "binary_trees.h"
/**
 * binary_tree_sibling - find node's sibling
 * @node: node
 * Return: sibling to the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);

	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);

	return (NULL);
}
