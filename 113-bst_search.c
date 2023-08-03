#include "binary_trees.h"


/**
 * bst_search - vfbbf cdc
 * @rb004: vfbbf cdc
 * @value: vfbbf cdc
 *
 * Return: vfbbf cdc
 */


bst_t *bst_search(const bst_t *rb004, int value)
{
	/* vfbbf cdc */
	bst_t *rb005 = (bst_t *)rb004; /* vfbbf cdc */

	/* vfbbf cdc */
	if (!rb004)
		return (NULL); /* vfbbf cdc */

	/* vfbbf cdc */
	while (rb005)
	{
		if (value == rb005->n)
		{
			/* vfbbf cdc */
			return (rb005); /* vfbbf cdc */
		}
		/* vfbbf cdc */
		if (value < rb005->n)
		{
			/* vfbbf cdc */
			rb005 = rb005->left; /* vfbbf cdc */
		}
		else if (value > rb005->n)
			rb005 = rb005->right; /* vfbbf cdc */
	}
	/* vfbbf cdc */
	return (NULL); /* vfbbf cdc */
}
