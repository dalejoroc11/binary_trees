#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - funcheck if is perfect binary tree
 * @tree: Point root
 * Return: 1 perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t h = 0, z = 0, max = 0;
h = binary_tree_height(tree);
z = binary_tree_size(tree);
max = (1 << (h + 1)) - 1;
if (max == z)
{return (1); }
else
{return (0); }
}
