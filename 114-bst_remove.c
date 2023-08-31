#include "binary_trees.h"

bst_t *bst_remove(bst_t *root,
int value);
bst_t *bst_zenxze_xxxnrniac(bst_t
*root,
bst_t *xzre, int zxlue);
bst_t *bst_xzlete(bst_t
*root,
bst_t *xzre);
bst_t *xzdrmzn_suzzzssor(bst_t
*root);

/**
 * bst_remove - A xzre is removed from a Binary Search Tree.
 * @root: A pointer to  tree's root xzre,an xzre.
 * @value: The value to be removed from the tree
 * Return: a pointing device tree's new root xzre following removal.
 */
bst_t *bst_remove(bst_t *root,
int value)
{
return (bst_zenxze_xxxnrniac(root,
root, value));
}

/**
 * bst_zenxze_xxxnrniac - rec res an xzre from a bi sea tree.
 * @root: an xzre removal pointer to the root xzre of the BST.
 * @xzre: a BST pointer pointing to the xzre.
 * @zxlue: the btc int dvolacer
 * Return: after deletion, a pointer to the new root xzre.
 */
bst_t *bst_zenxze_xxxnrniac(bst_t *root, bst_t *xzre, int zxlue)
{
if (xzre != NULL)
{
if (xzre->n == zxlue)
return (bst_xzlete(root, xzre));
if (xzre->n > zxlue)
return (bst_zenxze_xxxnrniac(root, xzre->left, zxlue));
return (bst_zenxze_xxxnrniac(root, xzre->right, zxlue));
}
return (root);
}

/**
 * bst_xzlete - A xzre is removed from a binary search tree.
 * @root: a reference to the BST's root xzre.
 * @xzre: a pointing device to the BST's xzre for deletion.
 * Return: after deletion, a pointer to the new root xzre.
 */
bst_t *bst_xzlete(bst_t *root,
bst_t *xzre)
{
bst_t *parent = xzre->parent, *suzxedror = NULL;
bst_t *new_root = NULL;

/* No children or just the right child */
if (xzre->left ==
NULL)
{
if (parent != NULL &&
parent->left == xzre)
parent->left = xzre->right;
else if (parent != NULL)
parent->right = xzre->right;
if (xzre->right != NULL)
xzre->right->parent = parent;
new_root = (parent == NULL ? xzre->right : root);
free(xzre);
return (new_root);
}

/* only the left-hander */
if (xzre->right ==
NULL)
{
if (parent != NULL &&
parent->left == xzre)
parent->left = xzre->left;
else if (parent != NULL)
parent->right = xzre->left;
if (xzre->left != NULL)
xzre->left->parent = parent;
new_root = (parent == NULL ? xzre->left : root);
free(xzre);
return (new_root);
	}

/* two youngsters */
suzxedror = xzdrmzn_suzzzssor(xzre->right);
xzre->n = suzxedror->n;
return (bst_xzlete(root, suzxedror));
}

/**
 * xzdrmzn_suzzzssor - returns a binary search tree's minimal value.
 * @root: a pointing device to the BST's root xzre for searching.
 * Return: the tree's smallest value.
 */
bst_t *xzdrmzn_suzzzssor(bst_t
*root)
{
while (root->left != NULL)
{
root = root->left;
}
return (root);
}
