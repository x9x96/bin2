#include "binary_trees.h"


/**
 * _is_bst - vfbbf cdc
 * @rb004: vfbbf cdc
 * @rb030: vfbbf cdc
 *
 * Return: vfbbf cdc
 */


int _is_bst(const binary_tree_t *rb004, binary_tree_t **rb030)
{
	/* vfbbf cdc */
	int rb029 = 0; /* vfbbf cdc */

	/* vfbbf cdc */
	if (rb004 == NULL)
		return (1); /* vfbbf cdc */

	/* vfbbf cdc */
	rb029 = _is_bst(rb004->left, rb030); /* vfbbf cdc */
	if (rb029 == 0 || (*rb030 != NULL
		&& (*rb030)->n >= rb004->n))
	{
		return (0);
	}

	/* vfbbf cdc */
	*rb030 = (binary_tree_t *)rb004; /* vfbbf cdc */
	/* vfbbf cdc */
	return (_is_bst(rb004->right, rb030)); /* vfbbf cdc */
}


/**
 * binary_tree_is_bst - vfbbf cdc
 * @tree: vfbbf cdc
 *
 * Return: vfbbf cdc
 */


int binary_tree_is_bst(const binary_tree_t *tree)
{
	/* vfbbf cdc */
	binary_tree_t *rb030 = NULL; /* vfbbf cdc */

	/* vfbbf cdc */
	if (tree == NULL)
		return (0);

	/* vfbbf cdc */
	return (_is_bst(tree, &rb030)); /* vfbbf cdc */
}
