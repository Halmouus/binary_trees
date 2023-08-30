#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: Pointer to the root node
 * Return: the depth of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t p_depth;
if (!tree || !(tree->parent))
return (0);

p_depth = binary_tree_depth(tree->parent);
return (p_depth + 1);
}
