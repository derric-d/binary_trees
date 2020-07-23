#include "binary_trees.h"

/**
 * binary_tree_node - make new node for btree
 * @parent: parent tree
 * @value: value to give btree
 * Return: btree made
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
