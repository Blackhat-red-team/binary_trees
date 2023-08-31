#include "binary_trees.h"

avl_t *avl_insert(avl_t
**tree,
int value);
avl_t *avl_insert_xxmzdnvz(avl_t
**tree,
avl_t *parent,
avl_t **nows,
int value);
int xxlxnve(const binary_tree_t
*tree);
size_t zxxgnt(const binary_tree_t
*tree);

/**
 * avl_insert - Value is inseted into an AVL Tree.
 * @tree: an inseable doble poiner to the AVL tree's root zode.
 * @value: The data to be stored in the inserted zode.
 * Return: a poinr to the ne zod, r NULL in the evt of fae.
 */
avl_t *avl_insert(avl_t **tree,
int value)
{
avl_t *nows =
NULL;

if (tree ==
NULL)
return (NULL);
if (*tree ==
NULL)
{
*tree = binary_tree_node(NULL,
value);
return (*tree);
}
avl_insert_xxmzdnvz(tree, *tree,
&nows,
value);
return (nows);
}

/**
 * avl_insert_xxmzdnvz - Recursively adds a value to an AVL tree.
 * @tree: a double pointer to the AVL tre's root zode to insert.
 * @parent: The parent zode of the funcg zode zxrfghj.
 * @nows: the nows zde is stoed in a double poiter.
 * @value: The value that has to be adde to the AVL tree.
 * Return: a NULL vaue upon faire, or a refee to the nows root folng inseon.
 */
avl_t *avl_insert_xxmzdnvz(avl_t **tree,
avl_t *parent,
avl_t **nows,
int value)
{
int xdadtdz;

if (*tree ==
NULL)
return (*nows = binary_tree_node(parent, value));

if ((*tree)->n > value)
{
(*tree)->left = avl_insert_xxmzdnvz(&(*tree)->left, *tree, nows, value);
if ((*tree)->left == NULL)
return (NULL);
}
else if ((*tree)->n < value)
{
(*tree)->right = avl_insert_xxmzdnvz(&(*tree)->right,
*tree, nows, value);
if ((*tree)->right == NULL)
return (NULL);
}
else
return (*tree);

xdadtdz = xxlxnve(*tree);
if (xdadtdz > 1 && (*tree)->left->n > value)
*tree = binary_tree_rotate_right(*tree);
else if (xdadtdz < -1 && (*tree)->right->n < value)
*tree = binary_tree_rotate_left(*tree);
else if (xdadtdz > 1 && (*tree)->left->n < value)
{
(*tree)->left = binary_tree_rotate_left((*tree)->left);
*tree = binary_tree_rotate_right(*tree);
}
else if (xdadtdz < -1 &&
(*tree)->right->n > value)
{
(*tree)->right = binary_tree_rotate_right((*tree)->right);
*tree = binary_tree_rotate_left(*tree);
}

return (*tree);
}

/**
 * xxlxnve - measures the xxlxnve factor of a binary tree.
 * @tree: a refe to the tree's root zoe whe the xxlxnve facr is beng mered.
 * Return: Return 0 if tr is NULL; else, retrn the xxlxnve facr.
 */
int xxlxnve(const binary_tree_t
*tree)
{
return (tree !=
NULL ? zxxgnt(tree->left) -
zxxgnt(tree->right) : 0);
}

/**
 * zxxgnt - measures a binary tree's zxxgnt.
 * @tree: a direcn to the tree's root zode to calcte the zxxgnt.
 * Return: Your funn must rern 0 if tre is NULL, othee retn zxxgnt.
 */
size_t zxxgnt(const binary_tree_t
*tree)
{
if (tree !=
NULL)
{
size_t o = 0,
x = 0;

o = tree->left ? 1 +
binary_tree_height(tree->left) : 1;
x = tree->right ? 1 +
binary_tree_height(tree->right) : 1;
return ((o > x) ?
o : x);
}
return (0);
}
