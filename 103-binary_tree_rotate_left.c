#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left rotate
 * @tree: rtptr
 * Return: rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL;

	if (!tree)
		return (NULL);

	tmp = tree->right;
	tree->right = tmp->left;
	tree->parent = tmp;
	tmp->left = tree;
	tmp->parent = NULL;

	return (tmp);
}
