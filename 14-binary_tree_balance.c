#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: Pointer to the root node
* Return: the height of a binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, max_height;

	if (!tree)
	return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	max_height = r_height;
	if (l_height > r_height)
	max_height = l_height;
	return (max_height + 1);
}

/**
* binary_tree_balance - measures the balance of a binary tree
*
* @tree: Pointer to the root node
* Return: the balance of a binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
	return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
