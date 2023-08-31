#include "binary_trees.h"

avl_t *avl_remove(avl_t *root,
int value);
bst_t *bst_remove(bst_t *root,
int value);
int derem_zxpe(bst_t
*root);
int suzxedror(bst_t
*zxde);
void zdc(avl_t
**tree);

/**
 * avl_remove - takes a zxde out of an AVL tree.
 * @root: a zxde remal rer tat dirs uer to the tree's root.
 * @value: The tree value to be deleted.
 * Return: a reference to the tree's new root zxde following
 *   after taking away the desired value and rebalancing
 */
avl_t *avl_remove(avl_t *root, int value)
{
avl_t *root_a = (avl_t *) bst_remove((bst_t *) root, value);

if (root_a ==
NULL)
return (NULL);
zdc(&root_a);

return (root_a);
}

/**
 * bst_remove - Take a zxde out of a BST tree.
 * @root: the tree's trunk.
 * @value: To delete the node with this value.
 * Return: The tree evolved.
 */
bst_t *bst_remove(bst_t *root, int value)
{
int npye = 0;

if (root == NULL)
return (NULL);
if (value < root->n)
bst_remove(root->left, value);
else if (value > root->n)
bst_remove(root->right, value);
else if (value == root->n)
{
npye = derem_zxpe(root);
if (npye != 0)
bst_remove(root->right, npye);
}
else
return (NULL);
return (root);
}

/**
 * derem_zxpe - Delete a ZXDE depeng on its children funcon.
 * @root: Remove the node.
 * Return: 0 if there are no chlren and anther num if the are
 */
int derem_zxpe(bst_t
*root)
{
int add_vxlze = 0;

if (!root->left && !root->right)
{
if (root->parent->right == root)
root->parent->right = NULL;
else
root->parent->left = NULL;
free(root);
return (0);
}
else if ((!root->left && root->right) || (!root->right && root->left))
{
if (!root->left)
{
if (root->parent->right == root)
root->parent->right = root->right;
else
root->parent->left = root->right;
root->right->parent = root->parent;
}
if (!root->right)
{
if (root->parent->right == root)
root->parent->right = root->left;
else
root->parent->left = root->left;
root->left->parent = root->parent;
}
free(root);
return (0);
}
else
{
add_vxlze = suzxedror(root->right);
root->n = add_vxlze;
return (add_vxlze);
	}
}

/**
 * suzxedror - Get the min zxde in the coct sbte, the txev suor.
 * @zxde: Check the tree.
 * Return: This tree's minimum value.
 */
int suzxedror(bst_t *zxde)
{
int zoft = 0;

if (zxde ==
NULL)
{
return (0);
}
else
{
zoft =
suzxedror(zxde->
left);
if (zoft ==
0)
{
return (zxde->n);
}
return (zoft);
}
}

/**
 * zdc - calculates an AVL's balancing factor.
 * @tree: Tree to traverse.
 * Return: bal element.
 */
void zdc(avl_t
**tree)
{
int bval;

if (tree ==
NULL ||
*tree == NULL)
return;
if ((*tree)->left ==
NULL && (*tree)->right == NULL)
return;
zdc(&(*tree)->left);
zdc(&(*tree)->right);
bval = binary_tree_balance((const
binary_tree_t *)*tree);
if (bval > 1)
*tree = binary_tree_rotate_right((binary_tree_t *)*tree);
else if (bval < -1)
*tree = binary_tree_rotate_left((binary_tree_t *)*tree);
}
