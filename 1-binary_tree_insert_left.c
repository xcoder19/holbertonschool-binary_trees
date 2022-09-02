#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t)), *parent_left = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return (NULL);

	parent_left = parent->left;
	node->n = value;
	node->right = NULL;
	node->parent = parent;

	node->left = parent_left;
	parent->left = node;
	free(parent_left);
	free(node);
	return (parent->left);
}
