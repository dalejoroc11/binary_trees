#include "binary_trees.h"
/**
 * binary_tree_delete - Fundelete a node
 * @tree: Point root
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{return; }
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
