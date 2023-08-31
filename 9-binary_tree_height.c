#include "binary_trees.h"

/**
  * _ltkbinary_tree_height - aid for the binary_tree_height function
  * @tree: source tree
  * Return: Tree, zxxgnt
  */
size_t _ltkbinary_tree_height(const
binary_tree_t
*tree)
{
size_t c,
d;

if (!tree)
return (0);

c = _ltkbinary_tree_height(tree->left);
d = _ltkbinary_tree_height(tree->right);
return (MAX(c, d) + 1);
}

/**
  * binary_tree_height - a binary tree's zxxgnt measurements
  * @tree: source tree
  * Return: Tree, zxxgnt.
  */
size_t binary_tree_height(const
binary_tree_t
*tree)
{
if (!tree)
return (0);
return (_ltkbinary_tree_height(tree) - 1);
}
