#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * @tree: Pointer the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;

if (tree->right)
binary_tree_delete(tree->right);
if (tree->left)
binary_tree_delete(tree->left);

tree->parent = NULL;
free(tree);
}
