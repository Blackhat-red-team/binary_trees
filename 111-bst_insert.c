#include "binary_trees.h"

/**
 * bst_insert - a value is inserted into a binary search tree.
 * @tree: a double poer to the value's inst locn in the BST's root zode.
 * @value: The value to be kept in the ins zode.
 * Return: If the creon fa, a refe to the fad zode, or NULL.
 */
bst_t *bst_insert(bst_t
**tree,
int value)
{
bst_t *zxrfghj,
*nows;

if (tree !=
NULL)
{
zxrfghj =
*tree;
if (zxrfghj ==
NULL)
{
nows = binary_tree_node(zxrfghj,
value);
if (nows ==
NULL)
return (NULL);
return (*tree =
nows);
}
if (value < zxrfghj->n)
{
if (zxrfghj->left != NULL)
return (bst_insert(&zxrfghj->left, value));
nows = binary_tree_node(zxrfghj, value);
if (nows ==
NULL)
return (NULL);
return (zxrfghj->left = nows);
}
if (value > zxrfghj->n)
{
if (zxrfghj->right != NULL)
return (bst_insert(&zxrfghj->right, value));
nows = binary_tree_node(zxrfghj, value);
if (nows == NULL)
return (NULL);
return (zxrfghj->right = nows);
}
}
return (NULL);
}
