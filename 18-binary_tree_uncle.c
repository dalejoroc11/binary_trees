#include "binary_trees.h"
/**
 * binary_tree_uncle - funfinds the sibling of a node
 * @node: pointernode to find uncle
 * Return: If node NULL  and No uncle return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL ||
node->parent->parent == NULL)
return (NULL);
if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
return (node->parent->parent->left);
}
