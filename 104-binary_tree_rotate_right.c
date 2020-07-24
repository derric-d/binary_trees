#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right rotate
 * @tree: rtptr
 * Return: rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL;

	if (!tree)
		return (NULL);

	tmp = tree->left;
	tree->left = tmp->right;
	tree->parent = tmp;
	tmp->parent = NULL;

	if (tmp->right)
		tmp->right->parent = tree;
	tmp->right = tree;
	return (tmp);
}
