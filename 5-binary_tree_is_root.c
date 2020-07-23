#include "binary_trees.h"

/**
 * binary_tree_is_root - check if has children
 * @node: ptr to root of tree
 * Return: 0 if false else 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->parent)
		return (1);
	return (0);
}
