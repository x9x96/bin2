#include "binary_trees.h"


/**
 * bst_checker - bjbv e vev
 * @rb004: bjbv e vev
 * @rb034: bjbv e vev
 * @rb035: bjbv e vev
 * @rb036: bjbv e vev
 */


void bst_checker(const binary_tree_t *rb004, int rb034, int rb035, int *rb036)
{
	if (rb004 != NULL)
	{
		if ((rb004->n > rb034)
			&& (rb004->n < rb035))
		{
			bst_checker(rb004->left, rb034,
				rb004->n, rb036); /* lknk  wewc*/
			/* lknk  wewc*/
			bst_checker(rb004->right, rb004->n,
				rb035, rb036); /* lknk  wewc*/
		}
		else
		{
			/* lknk  wewc*/
			if (rb036 != NULL)
			{
				/* lknk  wewc*/
				*rb036 = 0; /* lknk  wewc*/
			}
		}
	}
}


/**
 * tree_height_1 - bjbv e vev
 * @rb004: bjbv e vev
 * @rb032: bjbv e vev
 * @rb015: bjbv e vev
 */


void tree_height_1(const binary_tree_t *rb004, int rb032, int *rb015)
{
	if (rb004 != NULL)
	{
		/* lknk  wewc*/
		if ((rb004->left == NULL)
			&& (rb004->right == NULL))
		{
			/* lknk  wewc*/
			if (rb032 > *rb015)
			{
				/* lknk  wewc*/
				*rb015 = rb032; /* lknk  wewc*/
			}
		}

		else
		{
			/* lknk  wewc*/
			tree_height_1(rb004->left,
				rb032 + 1, rb015); /* lknk  wewc*/
			/* lknk  wewc*/
			tree_height_1(rb004->right,
				rb032 + 1, rb015); /* lknk  wewc*/
		}
	}
}


/**
 * avl_tree_balance - bjbv e vev
 * @rb004: bjbv e vev
 * @rb037: bjbv e vev
 */


void avl_tree_balance(const binary_tree_t *rb004, int *rb037)
{
	int rb038 = 0;
	int rb039 = 0;
	int rb040 = 0;

	if (rb004 != NULL)
	{
		/* lknk  wewc*/
		tree_height_1(rb004->left,
			1, &rb039); /* lknk  wewc*/
		/* lknk  wewc*/
		tree_height_1(rb004->right,
			1, &rb040);
		/* lknk  wewc*/
		rb038 = rb039 - rb040; /* lknk  wewc*/

		if (!((rb038 >= -1) && (rb038 <= 1)))
		{
			/* lknk  wewc*/
			if (rb037 != NULL)
			{
				/* lknk  wewc*/
				*rb037 = 0; /* lknk  wewc*/
			}
		}
		/* lknk  wewc*/
		else
		{
			/* lknk  wewc*/
			avl_tree_balance(rb004->left,
				rb037); /* lknk  wewc*/
			avl_tree_balance(rb004->right,
				rb037); /* lknk  wewc*/
		}
	}
}



/**
 * binary_tree_is_avl - bjbv e vev
 * @tree: bjbv e vev
 *
 * Return: bjbv e vev
 */


int binary_tree_is_avl(const binary_tree_t *tree)
{
	int rb036 = 0;
	int rb041 = 0;

	if (tree != NULL)
	{
		rb036 = 1; /* lknk  wewc*/
		bst_checker(tree, INT_MIN,
			INT_MAX, &rb036); /* lknk  wewc*/

		if (rb036 == 1)
		{
			/* lknk  wewc*/
			rb041 = 1; /* lknk  wewc*/
			avl_tree_balance(tree,
				&rb041); /* lknk  wewc*/
		}
	}
	return (rb041); /* lknk  wewc*/
}
