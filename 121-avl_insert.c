#include "binary_trees.h"


/**
 * bst_insert_helper - jbhvj ewfc
 * @rb004: jbhvj ewfc
 * @rb001: jbhvj ewfc
 *
 * Return: jbhvj ewfc
 */


bst_t *bst_insert_helper(bst_t **rb004, int rb001)
{
	bst_t *rb042 = NULL, *rb000 = NULL; /* jbhvj */
	if (rb004 != NULL)
	{
		rb000 = *rb004;
		if (*rb004 == NULL)
		{
			rb042 = binary_tree_node(*rb004, rb001);
			*rb004 = rb042; /* jbhvj */
		}
		else
		{
			while (rb000 != NULL)
			{
				if ((rb000->n > rb001)
					&& (rb000->left != NULL))
					rb000 = rb000->left; /* jbhvj */
				else if ((rb000->n < rb001) && (rb000->right != NULL))
					rb000 = rb000->right; /* jbhvj */
				else
					break;
			}
			if (rb000->n < rb001)
			{
				rb042 = binary_tree_node(rb000, rb001);
				/* jbhvj */
				rb000->right = rb042; /* jbhvj */
			}
			else if (rb000->n > rb001)
			{
				rb042 = binary_tree_node(rb000, rb001);
				rb000->left = rb042; /* jbhvj */
			}
		}
	}
	return (rb042); /* jbhvj */
}


/**
 * tree_height_2 - jbhvj ewfc
 * @rb004: jbhvj ewfc
 *
 * Return: jbhvj ewfc
 */


int tree_height_2(const binary_tree_t *rb004)
{
	int rb011 = 0, rb010 = 0;

	if (rb004 != NULL)
	{
		/* jbhvj */
		rb011 = tree_height_2(rb004->left);
		/* jbhvj */
		rb010 = tree_height_2(rb004->right);
	}
	/* jbhvj */
	return ((rb011 > rb010 ? rb011
		: rb010) + 1); /* jbhvj */
}


/**
 * adjust_balance - jbhvj ewfc
 * @rb033: jbhvj ewfc
 * @rb005: jbhvj ewfc
 */


void adjust_balance(avl_t **rb033, avl_t *rb005)
{
	avl_t *rb043 = rb005, *rb044 = *rb033;

	int rb039 = 0, rb040 = 0, rb045 = 0;

	while (rb043 != NULL)
	{
		/* jbhvj */
		rb039 = tree_height_2(rb043->left); /* jbhvj */
		rb040 = tree_height_2(rb043->right); /* jbhvj */
		rb045 = rb039 - rb040; /* jbhvj */

		if (!((rb045 >= -1) && (rb045 <= 1)))
		{
			if ((rb045 == 2)
				&& (rb005->n < rb043->left->n))
			{
				rb044 = binary_tree_rotate_right(rb043);
			}
			else if ((rb045 == 2) && (rb005->n > rb043->left->n))
			{
				rb043->left = binary_tree_rotate_left(rb043->left);
				rb044 = binary_tree_rotate_right(rb043); /* jbhvj */
			}
			else if ((rb045 == -2) && (rb005->n > rb043->right->n))
			{
				rb044 = binary_tree_rotate_left(rb043); /* jbhvj */
			}
			else if ((rb045 == -2) && (rb005->n < rb043->right->n))
			{
				rb043->right = binary_tree_rotate_right(rb043->right);
				rb044 = binary_tree_rotate_left(rb043); /* jbhvj */
			}
			rb044 = (rb043 == *rb033 ? rb044 : *rb033);
			break;
		}
		rb043 = rb043->parent; /* jbhvj */
	}
	*rb033 = rb044; /* jbhvj */
}


/**
 * avl_insert - jbhvj ewfc
 * @tree: jbhvj ewfc
 * @value: jbhvj ewfc
 *
 * Return: jbhvj ewfc
 */


avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *rb042 = NULL;

	if (tree != NULL)
	{
		/* jbhvj */
		rb042 = bst_insert_helper(tree, value); /* jbhvj */
		/* jbhvj */
		adjust_balance(tree, rb042); /* jbhvj */
	}
	return (rb042); /* jbhvj */

}
