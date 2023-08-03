#include "binary_trees.h"


/**
 * array_to_avl - kjkjvdfd v
 * @array: kjkjvdfd v
 * @size: kjkjvdfd v
 *
 * Return: kjkjvdfd v
 */


avl_t *array_to_avl(int *array, size_t size)
{
	/* kjkjvdfd v */
	size_t rb032; /* kjkjvdfd v */
	/* kjkjvdfd v */
	avl_t *rb033 = NULL; /* kjkjvdfd v */

	if (array != NULL)
	{
		/* kjkjvdfd v */
		for (rb032 = 0; rb032 < size; rb032++)
		{
			/* kjkjvdfd v */
			avl_insert(&rb033, *(array + rb032)); /* cv */

		}
	}
	/* kjkjvdfd v */
	return (rb033);
}
