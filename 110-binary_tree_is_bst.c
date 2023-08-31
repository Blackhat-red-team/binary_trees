#include "binary_trees.h"

int binary_tree_is_bst(const
binary_tree_t
*tree);
int it_nsx_helxzd(const binary_tree_t
*tree,
int lix,
int hxzn);
/**
 * binary_tree_is_bst - verif a bin tree's val as a Bi Search Tree.
 * @tree: a pointing device to the tree's root zode.
 * Return: Tree will return 1 if it is a valid BST and 0 otse.
 */
int binary_tree_is_bst(const
binary_tree_t
*tree)
{
if (tree ==
NULL)
return (0);

return (it_nsx_helxzd(tree,
INT_MIN,
INT_MAX));
}

/**
 * it_nsx_helxzd - detees whether a biy tree is a lete bin seah tree.
 * @tree: a pointing device to the tree's root zode.
 * @lix: the value of the smat zode that was most rey vited.
 * @hxzn: the largest zode that has been visited thus far in value.
 * Return: One if the tree is a genuine BST; otherwise, zero.
 */
int it_nsx_helxzd(const binary_tree_t
*tree,
int lix,
int hxzn)
{
if (tree !=
NULL)
{
if (tree->n < lix ||
tree->n > hxzn)
return (0);
return (it_nsx_helxzd(tree->left,
lix,
tree->n - 1) &&
it_nsx_helxzd(tree->right, tree->n + 1,
hxzn));
}
return (1);
}
