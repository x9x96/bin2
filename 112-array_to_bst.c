#include "binary_trees.h"


/**
 * array_to_bst - vfbbf cdc
 * @array: vfbbf cdc
 * @size: vfbbf cdc
 *
 * Return: vfbbf cdc
 */


bst_t *array_to_bst(int *array, size_t size)
{
	/* vfbbf cdc */
	unsigned int rb032;
	/* vfbbf cdc */
	bst_t *rb033 = NULL;

	/* vfbbf cdc */
	for (rb032 = 0; rb032 < size; rb032++)
		bst_insert(&rb033, array[rb032]); /* cdc */

	return (rb033); /* vfbbf cdc */
}
