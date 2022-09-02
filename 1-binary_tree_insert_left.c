#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->right = NULL;
	node->parent = parent;
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
	{
		node->left = NULL;
		parent->left = node;
	}

	return (node);
}
