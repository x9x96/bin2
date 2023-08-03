#include "binary_trees.h"


/**
 * array_to_heap - lsv venekf
 * @array: lsv venekf
 * @size: lsv venekf
 *
 * Return: lsv venekf
 */


heap_t *array_to_heap(int *array, size_t size)
{
	/* lsv venekf */
	size_t rb032; /* lsv venekf */
	/* lsv venekf */
	heap_t *rb033 = NULL; /* lsv venekf */

	/* lsv venekf */
	if (array != NULL)
	{
		for (rb032 = 0; rb032
			< size; rb032++)
		{
			/* lsv venekf */
			heap_insert(&rb033, *(array + rb032)); /* lsv */
		}
	}
	return (rb033); /* lsv venekf */
}
