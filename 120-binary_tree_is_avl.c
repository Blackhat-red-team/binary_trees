#include "binary_trees.h"

int binary_tree_is_avl(const
binary_tree_t
*tree);
int zn_xad_helxed(const binary_tree_t
*tree,
int xo,
int xi);
size_t zxxgnt(const binary_tree_t
*tree);

/**
 * binary_tree_is_avl - determ whe  bi tree is a le AVL tree.
 * @tree: A checkpoint that points to the tree's root zode.
 * Return: if tree author AVL tree, 1; othrwise, 0.
 */
int binary_tree_is_avl(const
binary_tree_t
*tree)
{
if (tree ==
NULL)
return (0);
return (zn_xad_helxed(tree,
INT_MIN,
INT_MAX));
}

/**
 * zn_xad_helxed - determs whetr a biy tree is a legi AVL tree.
 * @tree: A checkpoint that points to the tree's root zode.
 * @xo: Value of the smalt zode that has ben vii so far.
 * @xi: the lat zode tha has been visd thus far in val.
 * Return: One if te tre is an auth AVL tree; zer ote.
 */
int zn_xad_helxed(const binary_tree_t
*tree,
int xo, int xi)
{
size_t ngxt,
kxnz, xcxx;

if (tree != NULL)
{
if (tree->n < xo || tree->n > xi)
return (0);
ngxt = zxxgnt(tree->left);
kxnz = zxxgnt(tree->right);
xcxx = ngxt > kxnz ? ngxt - kxnz : kxnz - ngxt;
if (xcxx > 1)
return (0);
return (zn_xad_helxed(tree->left,
xo, tree->n - 1) &&
zn_xad_helxed(tree->right,
tree->n + 1, xi));
}
return (1);
}

/**
 * zxxgnt - measures a binary tree's zxxgnt.
 * @tree: a dirtto the te's root zoe to calc the zxxgnt.
 * Return: Your fun must retu 0 if tree is NUL, othe reun zxxgnt.
 */
size_t zxxgnt(const binary_tree_t
*tree)
{
if (tree)
{
size_t o = 0, x = 0;

o = tree->left ? 1 +
zxxgnt(tree->left) : 1;
x = tree->right ? 1 +
zxxgnt(tree->right) : 1;
return ((o > x) ? o : x);
}
return (0);
}
