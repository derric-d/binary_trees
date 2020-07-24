#include "binary_trees.h"

/**
 * binary_tree_size - get size of tree
 * @tree: node passed
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * _check_complete - checks if complete
 * @tree: ptr to root
 * @i: index
 * @size: size of tree
 * Return: 1 if complete
 */
int _check_complete(const binary_tree_t *tree, size_t i, size_t size)
{
	if (!tree)
		return (1);

	if (i >= size)
		return (0);

	return (_check_complete(tree->left, 2 * i + 1, size) &&
		_check_complete(tree->right, 2 * i + 2, size));
}
/**
 * binary_tree_is_complete - check for comletion
 * @tree: ptr to the root
 * Return: 1 if complete, 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, idx = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	return (_check_complete(tree, idx, size));
}
