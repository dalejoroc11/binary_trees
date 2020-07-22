#include "binary_trees.h"
/**
 * binary_trees_ancestor - funfinds the lowest common ancestor of two nodes
 * @first: pointer first node
 * @second: pointer second node
 * Return: pointer lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
binary_tree_t *left, *right;
if (!first || !second)
return (NULL);
if (first == second)
return ((binary_tree_t *)first);
left = first->parent, right = second->parent;
if (first == right || !left || (!left->parent && right))
return (binary_trees_ancestor(first, right));
else if (left == second || !right || (!right->parent && left))
return (binary_trees_ancestor(left, second));
return (binary_trees_ancestor(left, right));
}
