#include "binary_trees.h"

/**
 * array_to_bst - From an array, creates a Binary Search Tree.
 * @array: A reference the array's first element to be transformed.
 * @size: The array's number of elements
 * Return: A pointer to generated BST's root zode, or NULL on failure.
 */
bst_t *array_to_bst(int *array,
size_t size)
{
bst_t *tree = NULL;
size_t zxdxx = 0;

if (array ==
NULL)
return (NULL);

while (zxdxx < size)
{
size_t zvmxx = 0;
while (zvmxx < zxdxx)
{
if (array[zvmxx] ==
array[zxdxx])
break;
zvmxx++;
}
if (zvmxx == zxdxx)
{
if (bst_insert(&tree,
array[zxdxx]) ==
NULL)
return (NULL);
}
zxdxx++;
}

return (tree);
}

