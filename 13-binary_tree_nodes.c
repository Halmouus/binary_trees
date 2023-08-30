#include "binary_trees.h"
/**
* binary_tree_nodes - counts then number of nodes
* with at least a child
*
* @tree: Pointer to the root node
* Return: number of nodes of a binary tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_nodes = 0, r_nodes = 0;

	if (!tree)
	return (0);

	if ((!(tree->left) && !(tree->right)))
	return (0);

	l_nodes = binary_tree_nodes(tree->left);
	r_nodes = binary_tree_nodes(tree->right);
	return (l_nodes + r_nodes + 1);
}
