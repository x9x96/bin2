#include "binary_trees.h"


/**
 * bst_insert - vfbbf cdc
 * @tree: vfbbf cdc
 * @value: vfbbf cdc
 *
 * Return: vfbbf cdc
 */


bst_t *bst_insert(bst_t **tree, int value)
{
	/* vfbbf cdc */
	bst_t *rb031 = NULL;
	/* vfbbf cdc */
	bst_t *rb021 = NULL;
	/* vfbbf cdc */
	bst_t *rb003 = NULL;

	if (!tree)
		return (NULL); /* vfbbf cdc */
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	rb031 = *tree; /* vfbbf cdc */
	/* vfbbf cdc */
	while (rb031)
	{
		rb021 = rb031; /* vfbbf cdc */
		if (value < rb031->n)
			rb031 = rb031->left; /* vfbbf cdc */
		else if (value > rb031->n)
			rb031 = rb031->right; /* vfbbf cdc */
		else if (value == rb031->n)
			return (NULL);
	}

	rb003 = binary_tree_node(NULL, value); /* vfbbf cdc */
	if (rb021 == NULL)
		rb021 = rb003; /* vfbbf cdc */
	/* vfbbf cdc */
	else if (value < rb021->n)
	{
		rb021->left = rb003; /* vfbbf cdc */
		rb003->parent = rb021; /* vfbbf cdc */
	}
	else
	{
		rb021->right = rb003; /* vfbbf cdc */
		/* vfbbf cdc */
		rb003->parent = rb021; /* vfbbf cdc */
	}

	return (rb003);
}
