#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;

node = malloc(sizeof(binary_tree_t));
if (!node)
return (NULL);

if (!parent)
node->parent = NULL;
else
node->parent = parent;

node->left = NULL;
node->right = NULL;
node->n = value;
return (node);
}