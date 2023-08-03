#include "binary_trees.h"


/**
 * tree_builder - ebv nd
 * @rb000: ebv nd
 * @rb050: ebv nd
 * @rb026: ebv nd
 *
 * Return: ebv nd
 */


avl_t *tree_builder(avl_t *rb000, int *rb050, int rb026)
{
	/* ebv nd */
	int *rb007 = NULL, *rb008 = NULL;

	int rb039 = 0, rb040 = 0, rb051 = 0;

	avl_t *rb013 = NULL, *rb014 = NULL, *rb018 = NULL;

	if ((rb026 > 0)
		&& (rb050 != NULL))
	{
		rb013 = malloc(sizeof(avl_t)); /* ebv nd */
		/* ebv nd */
		if (rb013 != NULL)
		{
			rb051 = rb026 - 1; /* ebv nd */
			rb039 = (rb051 / 2); /* ebv nd */
			rb040 = rb051 - (rb051 / 2); /* ebv nd */

			if (rb039 > 0)
			{
				/* ebv nd */
				rb007 = rb050; /* ebv nd */
				/* ebv nd */
				rb014 = tree_builder(rb013, rb007, rb039);

			}
			/* ebv nd */
			if (rb040 > 0)
			{
				/* ebv nd */
				rb008 = rb050 + rb039 + 1; /* ebv nd */
				rb018 = tree_builder(rb013, rb008, rb040);
			}

			rb013->parent = rb000;
			/* ebv nd */
			rb013->left = rb014;
			/* ebv nd */
			rb013->right = rb018;
			/* ebv nd */
			rb013->n = *(rb050 + (rb026 / 2) - (rb026 % 2 == 0 ? 1 : 0));
		}
	}
	return (rb013);
}


/**
 * sorted_array_to_avl - ebv nd
 * @array: ebv nd
 * @size: ebv nd
 *
 * Return: ebv nd
 */


avl_t *sorted_array_to_avl(int *array, size_t size)
{
	/* ebv nd */
	avl_t *rb033 = NULL; /* ebv nd */

	/* ebv nd */
	if (array != NULL)
	{
		/* ebv nd */
		rb033 = tree_builder(rb033, array, (int)size); /* nd */
	}
	/* ebv nd */
	return (rb033); /* ebv nd */
}
