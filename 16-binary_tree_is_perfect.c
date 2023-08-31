#include "binary_trees.h"

/**
  * _dvbbinary_tree_height - aid for the binary_tree_height function
  * @tree: source tree
  * Return: Tree, zxxgnt
  */
size_t _dvbbinary_tree_height(const
binary_tree_t *tree)
{
size_t c,
d;

if (!tree)
return (0);

c = _dvbbinary_tree_height(tree->
left);
d = _dvbbinary_tree_height(tree->
right);
return (MAX(c, d) + 1);
}

/**
  * binary_tree_height - measurements for the c binary tree.
  * @tree: source tree
  * Return: Tree, zxxgnt.
  */
size_t binary_tree_height(const
binary_tree_t
*tree)
{
if (!tree)
return (0);
return (_dvbbinary_tree_height(tree) - 1);
}


/**
  * binary_tree_size - C binary tree size is measured.
  * @tree: binary tree of input.
  * Return: number of nodes that are descendants.
  */
size_t binary_tree_size(const
binary_tree_t
*tree)
{
if (!tree)
return (0);

return (1 + binary_tree_size(tree->
left) +
binary_tree_size(tree->
right));
}

/**
  * binary_tree_is_perfect - to see if the c binary tree is flawless.
  * @tree: I entered binary tree
  * Return: 0 if false, 1 if true
  */
int binary_tree_is_perfect(const
binary_tree_t
*tree)
{
int z,
m;

if (!tree)
return (0);
z = (int)binary_tree_size(tree);
m = binary_tree_height(tree);
return (z ==
(2 << m)  - 1);
}
