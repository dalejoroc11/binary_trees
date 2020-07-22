#include "binary_trees.h"
/**
 * binary_tree_sibling - funfinds the sibling of a node
 * @node: pointer node to find sibling
 * Return: If node NULL or parents NULL return NULL and No sibling return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
return (node->parent->left);
}
