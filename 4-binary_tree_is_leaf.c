#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf
 * @node: Pointroot
 * Return:1 if leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->right || node->left)
return (0);
return (1);
}
