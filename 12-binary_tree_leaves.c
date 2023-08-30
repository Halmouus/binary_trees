#include "binary_trees.h"
/**
* binary_tree_leaves - counts then number of leaves of a binary tree
*
* @tree: Pointer to the root node
* Return: number of leaves of a binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves = 0, r_leaves = 0;

	if (!tree)
	return (0);

	if ((!(tree->left) && !(tree->right)))
	return (1);

	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);
	return (l_leaves + r_leaves);
}
