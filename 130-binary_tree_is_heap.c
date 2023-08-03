#include "binary_trees.h"


/**
 * enqueue_item_2 - jk vk dkbv
 * @rb052: jk vk dkbv
 * @rb053: jk vk dkbv
 * @rb013: jk vk dkbv
 * @rb054: jk vk dkbv
 */


void enqueue_item_2(binary_tree_t **rb052, binary_tree_t **rb053,
	int *rb013, void *rb054)
{
	/* jk vk dkbv */
	binary_tree_t *rb042;
	binary_tree_t *rb005 = (binary_tree_t *)rb054;

	if ((rb052 != NULL)
		&& (rb053 != NULL))
	{
		/* jk vk dkbv */
		rb042 = malloc(sizeof(binary_tree_t)); /* jk vk */
		if (rb042 == NULL)
			return;

		rb042->left = *rb053; /* jk vk dkbv */
		rb042->right = NULL;/* jk vk dkbv */
		/* jk vk dkbv */
		rb042->n = (rb005 != NULL ? rb005->n : -1); /* jk vk */
		/* jk vk dkbv */
		rb042->parent = rb005; /* jk vk dkbv */

		if (*rb052 == NULL)
			*rb052 = rb042; /* jk vk dkbv */

		if (*rb053 != NULL)
			(*rb053)->right = rb042; /* jk vk dkbv */

		*rb053 = rb042; /* jk vk dkbv */

		if (rb013 != NULL)
			(*rb013)++; /* jk vk dkbv */
	}
}


/**
 * dequeue_item_2 - jk vk dkbv
 * @rb052: jk vk dkbv
 * @rb053: jk vk dkbv
 * @rb013: jk vk dkbv
 *
 * Return: jk vk dkbv
 */


binary_tree_t *dequeue_item_2(binary_tree_t **rb052,
	binary_tree_t **rb053, int *rb013)
{
	binary_tree_t *rb055;
	binary_tree_t *rb056;
	binary_tree_t *rb005 = NULL;

	if ((rb052 != NULL)
		&& (rb053 != NULL))
	{
		rb055 = *rb052; /* jk vk dkbv */
		/* jk vk dkbv */
		if (rb055 != NULL)
		{
			rb005 = rb055->parent; /* jk vk dkbv */
			if (rb055->right != NULL)
			{
				rb056 = rb055->right; /* jk vk dkbv */
				/* jk vk dkbv */
				rb056->left = NULL; /* jk vk dkbv */
				/* jk vk dkbv */
				*rb052 = rb056; /* jk vk dkbv */
				free(rb055); /* jk vk dkbv */
			}
			else
			{
				free(rb055); /* jk vk dkbv */
				/* jk vk dkbv */
				*rb052 = NULL; /* jk vk dkbv */
				/* jk vk dkbv */
				*rb053 = NULL; /* jk vk dkbv */
			}
			/* jk vk dkbv */
			if (rb013 != NULL)
				(*rb013)--; /* jk vk dkbv */
		}
	}
	/* jk vk dkbv */
	return (rb005); /* jk vk dkbv */
}


/**
 * binary_tree_is_complete - jk vk dkbv
 * @rb004: jk vk dkbv
 *
 * Return: jk vk dkbv
 */


int binary_tree_is_complete(const binary_tree_t *rb004)
{
	binary_tree_t *rb057 = NULL;
	binary_tree_t *rb058 = NULL;
	binary_tree_t *rb059 = NULL;

	int rb013 = 0, rb035 = 0, rb037 = 0;

	if (rb004 != NULL)
	{
		rb037 = 1; /* jk vk dkbv */
		enqueue_item_2(&rb057,
			&rb058, &rb013, (void *)rb004); /* jk vk dkbv */
		while (rb013 > 0)
		{
			rb059 = rb057; /* jk vk dkbv */
			if (rb059->parent == NULL)
			{
				rb035 = 1; /* jk vk dkbv */
			}
			else
			{
				if (rb035 == 1)
				{
					rb037 = 0; /* jk vk dkbv */
					break; /* jk vk dkbv */
				}
				else if (rb059->parent != NULL)
				{
					enqueue_item_2(
						&rb057, &rb058,
						&rb013, (void *)(rb059->parent->left) /* jk vk */
					);

					enqueue_item_2(
						&rb057, &rb058,
						&rb013, (void *)(rb059->parent->right) /* jk vk */
					);
				}
			}
			dequeue_item_2(&rb057,
				&rb058, &rb013); /* jk vk dkbv */
		}
		while (rb013 > 0)
			dequeue_item_2(&rb057,
				&rb058, &rb013); /* jk vk dkbv */
	}
	return (rb037); /* jk vk dkbv */
}


/**
 * binary_heap_checker - jk vk dkbv
 * @rb004: jk vk dkbv
 * @rb035: jk vk dkbv
 * @rb060: jk vk dkbv
 */


void binary_heap_checker(const binary_tree_t *rb004, int rb035, int *rb060)
{
	if (rb004 != NULL)
	{
		/* jk vk dkbv */
		if (rb004->n <= rb035)
		{
			/* jk vk dkbv */
			binary_heap_checker(rb004->left,
				rb004->n, rb060); /* jk vk dkbv */

			binary_heap_checker(rb004->right,
				rb004->n, rb060); /* jk vk dkbv */
		}
		else
		{
			/* jk vk dkbv */
			if (rb060 != NULL)
			{
				*rb060 = 0; /* jk vk dkbv */
			}
		}
	}
}


/**
 * binary_tree_is_heap - jk vk dkbv
 * @tree: jk vk dkbv
 *
 * Return: jk vk dkbv
 */


int binary_tree_is_heap(const binary_tree_t *tree)
{
	/* jk vk dkbv */
	int is_complete = 0;

	int is_max_bin_heap = 0;

	if (tree != NULL)
	{
		/* jk vk dkbv */
		is_complete = binary_tree_is_complete(tree);

		if (is_complete == 1)
		{
			/* jk vk dkbv */
			is_max_bin_heap = 1; /* jk vk dkbv */

			binary_heap_checker(tree, INT_MAX,
				&is_max_bin_heap); /* jk vk dkbv */
		}
	}
	return (is_max_bin_heap); /* jk vk dkbv */
}
