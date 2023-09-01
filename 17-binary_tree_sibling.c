#include "binary_trees.h"
/**
* binary_tree_sibling - function that finds the sibling of a node
*
* @node: Pointer to the node to check
* Return:  pointer to the sibling node, NULL if not found or if
* parent is NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p_node;

	if (!node || !(node->parent))
	return (NULL);

	p_node = node->parent;
	if (node == p_node->left)
	{
		if (!(p_node->right))
		return (NULL);

		return (p_node->right);
	}

	if (!(p_node->left))
	return (NULL);

	return (p_node->left);

}
