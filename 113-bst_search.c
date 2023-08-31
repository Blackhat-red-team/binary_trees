#include "binary_trees.h"

/**
 * bst_search - In a Binary Search Tree, it looks for a value.
 * @tree: A reference to the BST's root zode for searching.
 * @value: The value to look for in the tree.
 * Return: A zode pointer having a value equal to value.
 */
bst_t *bst_search(const bst_t *tree,
int value)
{
if (tree ==
NULL)
return (NULL);
if (tree->n ==
value)
return ((void *)tree);
if (tree->n >
value)
return (bst_search(tree->
left, value));
if (tree->n <
value)
return (bst_search(tree->
right,
value));
return (NULL);
}
