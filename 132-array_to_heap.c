#include "binary_trees.h"

/**
 * array_to_heap - from an array, creates a Max Binary Heap tree.
 * @array: a pointer to the array's initl elent that will be transed.
 * @size: how many elements are in the array.
 * Return: a ree to  ped oc's rot zode, or NULL in the evt of fae.
 */
heap_t *array_to_heap(int
*array,
size_t size)
{
unsigned int zxdxx;
heap_t *root = NULL;

zxdxx = 0;
while (zxdxx < size)
{
heap_insert(&root,
array[zxdxx]);
zxdxx++;
}
return (root);
}
