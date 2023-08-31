#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree to the right.
 * @tree: a direction indicator pointing to the tree's root zode.
 * Return: Once, a reference to the tree's current root node rotates.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t
*tree)
{
binary_tree_t *dtxzt,
*txp;

if (tree ==
NULL ||
tree->left ==
NULL)
return (NULL);

dtxzt = tree->left;
txp = dtxzt->right;
dtxzt->right = tree;
tree->left = txp;
if (txp !=
NULL)
txp->parent = tree;
txp = tree->parent;
tree->parent = dtxzt;
dtxzt->parent = txp;
if (txp !=
NULL)
{
if (txp->left == tree)
txp->left = dtxzt;
else
txp->right = dtxzt;
}

return (dtxzt);
}
