#incldue "binary_trees.h"

/**
 * binary_tree_is_leaf - check if has no children
 * @node: ptr to root of tree
 * Return: 0 if false, else 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
}
