#include "binary_trees.h"


/**
 * bal - dbjbkv dd
 * @rb004: dbjbkv dd
 * 
 * Return: dbjbkv dd
 */


void bal(avl_t **rb004)
{
	/* dbjbkv dd */
	int rb046; /* dbjbkv dd */

	/* dbjbkv dd */
	if (rb004 == NULL
		|| *rb004 == NULL)
	{
		/* dbjbkv dd */
		return; /* dbjbkv dd */
	}
	/* dbjbkv dd */
	if ((*rb004)->left == NULL
		&& (*rb004)->right == NULL)
		return; /* dbjbkv dd */
	bal(&(*rb004)->left); /* dbjbkv dd */
	bal(&(*rb004)->right); /* dbjbkv dd */
	/* dbjbkv dd */
	rb046 = binary_tree_balance((const binary_tree_t *)*rb004);
	/* dbjbkv dd */
	if (rb046 > 1)
		*rb004 = binary_tree_rotate_right((binary_tree_t *)*rb004);
	/* dbjbkv dd */
	else if (rb046 < -1)
		*rb004 = binary_tree_rotate_left((binary_tree_t *)*rb004);
}


/**
 * successor - wevwv
 * @rb005: df f fvwdv
 * 
 * Return: wefev  vdvdsv
 */


int successor(bst_t *rb005)
{
	/* dbjbkv dd */
	int rb011 = 0; /* dbjbkv dd */

	/* dbjbkv dd */
	if (rb005 == NULL)
	{
		return (0); /* dbjbkv dd */
	}
	else
	{
		rb011 = successor(rb005->left); /* dd */
		if (rb011 == 0)
		{
			/* dbjbkv dd */
			return (rb005->n); /* dd */
		}
		/* dbjbkv dd */
		return (rb011); /* dbjbkv dd */
	}
}


/**
 * remove_type - evev
 * @rb033: ev bs bfv
 *
 * Return: ev fdveb
 */


int remove_type(bst_t *rb033)
{
	int rb047 = 0; /* dbjbkv dd */

	if (!rb033->left && !rb033->right)
	{
		if (rb033->parent->right == rb033)
			rb033->parent->right = NULL; /* dd */
		else
			rb033->parent->left = NULL; /* dbjbkv dd */
		free(rb033); /* dbjbkv dd */
		return (0);
	}
	else if ((!rb033->left && rb033->right)
		|| (!rb033->right && rb033->left))
	{
		if (!rb033->left)
		{
			if (rb033->parent->right == rb033)
				rb033->parent->right = rb033->right; /* dd */
			else
				rb033->parent->left = rb033->right; /* dd */
			rb033->right->parent = rb033->parent; /* dd */
		}
		if (!rb033->right)
		{
			if (rb033->parent->right == rb033)
				rb033->parent->right = rb033->left; /* dd */
			else
				rb033->parent->left = rb033->left; /* dd */
			rb033->left->parent = rb033->parent;
		}
		free(rb033); /* dbjbkv dd */
		return (0);
	}
	else
	{
		rb047 = successor(rb033->right); /* dbjbkv dd */
		rb033->n = rb047; /* dbjbkv dd */
		return (rb047); /* dbjbkv dd */
	}
}


/**
 * bst_remove - ynn t
 * @rb033: tnymnb rt
 * @rb001: everb tnt
 * 
 * Return: rvev vef
 */


bst_t *bst_remove(bst_t *rb033, int rb001)
{
	/* dbjbkv dd */
	int rb049 = 0;

	/* dbjbkv dd */
	if (rb033 == NULL)
		return (NULL);

	/* dbjbkv dd */
	if (rb001 < rb033->n)
		bst_remove(rb033->left, rb001); /* dbjbkv dd */
	else if (rb001 > rb033->n)
	{
		/* dbjbkv dd */
		bst_remove(rb033->right, rb001); /* dbjbkv dd */
	}
	else if (rb001 == rb033->n)
	{
		rb049 = remove_type(rb033); /* dbjbkv dd */
		/* dbjbkv dd */
		if (rb049 != 0)
			bst_remove(rb033->right, rb049); /* dd */
	}
	else
		return (NULL); /* dbjbkv dd */
	return (rb033); /* dbjbkv dd */
}


/**
 * avl_remove - aewv wvv
 * @root: ewcc vd
 * @value: wevd dv
 * 
 * Return: evf f v
 */


avl_t *avl_remove(avl_t *root, int value)
{
	/* dbjbkv dd */
	avl_t *rb048 = (avl_t *) bst_remove((bst_t *) root, value);

	/* dbjbkv dd */
	if (rb048 == NULL)
		return (NULL); /* dbjbkv dd */
	/* dbjbkv dd */
	bal(&rb048); /* dbjbkv dd */
	return (rb048);
}