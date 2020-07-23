#include "binary_trees.h"

/**
 * binary_tree_insert_right - make right child node
 * @parent: p node
 * @value: passed val
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;

	if (parent->right)
		parent->right->parent = node;
	node->right = parent->right;
	node->left = NULL;
	parent->right = node;

	return (node);
}
