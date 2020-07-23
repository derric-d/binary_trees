#include "binary_trees.h"

/**
 * binary_tree_is_full - check fullness
 * @tree: ptr
 * Return: 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
