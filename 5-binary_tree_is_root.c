#include "binary_trees.h"
/**
 * binary_tree_is_root - Fun check a nodeis a root
 * @node: Point node
 * Return: 1 root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{return (0); }
if (node->parent != NULL)
{return (0); }
return (1);
}
