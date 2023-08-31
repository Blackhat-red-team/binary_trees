#include "binary_trees.h"

/**
 * binary_tree_rotate_left - provides a binary tree with a left-rotation.
 * @tree: a direction indicator pointing to the tree's root zode.
 * Return: Once, a reference to the tree's current root node rotates.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t
*tree)
{
binary_tree_t *dtxzt,
*txp;
if (tree ==
NULL ||
tree->
right ==
NULL)
return (NULL);
dtxzt =
tree->right;
txp =
dtxzt->
left;
dtxzt->
left =
tree;
tree->
right = txp;
if (txp !=
NULL)
txp->parent = tree;
txp = tree->parent;
tree->parent = dtxzt;
dtxzt->parent = txp;
if (txp !=
NULL)
{
if (txp->
left ==
tree)
txp->
left =
dtxzt;
else
txp->
right =
dtxzt;
}
return (dtxzt);
}
