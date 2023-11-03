#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to tt of the array to be converted
 * @size: number of elemen
 *
 * Description: If a value ofeady exists, this value is ignored
 *
 * Return: pointer to the root node of the re
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
