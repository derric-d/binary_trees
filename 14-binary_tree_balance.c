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
 * binary_tree_balance - count balance of tree
 * @tree: root ptr
 * Return: int balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (tree->left)
		l = (int)binary_tree_height(tree->left);
	else
		l = -1;
	if (tree->right)
		r = (int)binary_tree_height(tree->right);
	else
		r = -1;
	return (l - r);
}
