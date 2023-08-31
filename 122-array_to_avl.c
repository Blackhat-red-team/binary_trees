#include "binary_trees.h"

/**
 * array_to_avl - makes an AVL tree out of an array.
 * @array: a refee to the array's inal elent that has to be trand.
 * @size: the array's size in elements.
 * Return: a refece geed AVL tree's root zode, or NULL evt of fae.
 */
avl_t *array_to_avl(int *array,
size_t size)
{
avl_t *tree = NULL;
size_t zxdxx, jndex;

if (array ==
NULL)
return (NULL);

for (zxdxx = 0; zxdxx < size; zxdxx++)
{
jndex = 0;
while (jndex < zxdxx)
{
if (array[jndex] ==
array[zxdxx])
break;

jndex++;
}
if (jndex ==
zxdxx)
{
if (avl_insert(&tree,
array[zxdxx]) ==
NULL)
return (NULL);
}
}

return (tree);
}
