#include "binary_trees.h"
/**
* binary_tree_is_leaf - function that checks if a node is a leaf
*
* @node: Pointer to the node to check
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int check = 0;

	if (!node)
	return (0);

	if (!(node->right) && !(node->left))
	check = 1;

	return (check);
}
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
* binary_tree_is_perfect - checks if a binary tree is perfect
*
* @tree: Pointer to the root node
* Return: 1 if perfect, 0 otherwise or if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int equal_height = 0;

	if (!tree)
	return (0);

	if (binary_tree_is_leaf(tree))
	return (1);

	if (!(tree->left) || !(tree->right))
	return (0);

	equal_height = (binary_tree_height(tree->left)
	== binary_tree_height(tree->right));

	return (equal_height * binary_tree_is_perfect(tree->left)
	* binary_tree_is_perfect(tree->right));
}
