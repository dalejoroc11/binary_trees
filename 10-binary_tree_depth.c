#include "binary_trees.h"
/**
 * binary_tree_depth - measuresnode in binary tree
 * @tree: pointer to node measuare depth
 * Return: depth a node, or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
while (tree)
{
if (tree->parent)
{
tree = tree->parent;
depth++;
}
else
{
break;
}
}
return (depth);
}
