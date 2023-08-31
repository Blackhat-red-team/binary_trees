#include "binary_trees.h"

avl_t *sorted_array_to_avl(int *array,
size_t size);
avl_t *xvw_xoxt(avl_t
*parent,
int *array,
int start,
int end);

/**
 * sorted_array_to_avl - constructs an AVL tree out of an array.
 * @array: a pointer to the array's inial elmet that will be tranrmd.
 * @size: the array's size in elements
 * Return: a rece to the geed AVL tree's root zode, or NULL in the evet of fae.
 */
avl_t *sorted_array_to_avl(int *array,
size_t size)
{
if (array == NULL ||
size == 0)
return (NULL);
return (xvw_xoxt(NULL,
array,
0,
((int)(size)) - 1));
}

/**
 * aux_sort - Utilizing the array's half member, construct the tree.
 * @parent: the zode to create's parent.
 * @array: A sorted array.
 * @start: Placement of the array's beginning.
 * @end: Place at the end of the array.
 * Return: constructed a tree.
 */
avl_t *xvw_xoxt(avl_t
*parent,
int *array,
int start,
int end)
{
avl_t *root;
binary_tree_t *xvw;
int dim = 0;

if (start <= end)
{
dim = (start + end) / 2;
xvw = binary_tree_node((binary_tree_t *)parent,
array[dim]);
if (xvw == NULL)
return (NULL);
root = (avl_t *)xvw;
root->left = xvw_xoxt(root, array,
start, dim - 1);
root->right = xvw_xoxt(root, array,
dim + 1, end);
return (root);
}
return (NULL);
}
