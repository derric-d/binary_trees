#include "binary_trees.h"

/**
 * _binary_tree_height - get height of tree from node
 * @tree: root of tree
 * Return: height of tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = _binary_tree_height(tree->left);
	r = _binary_tree_height(tree->right);
	if (l < r)
		return (r + 1);
	else
		return (l + 1);
}
/**
 * binary_tree_height - get height of tree from node
 * @tree: root of tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_is_perfect - check if perfect
 * @tree: rtptr
 * Return: 0 if false else 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
