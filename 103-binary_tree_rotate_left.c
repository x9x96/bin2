#include "binary_trees.h"


/**
 * binary_tree_rotate_left - ved dcds 
 * @tree: ved dcds
 *
 * Return: ved dcds
 */


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	/* ved dcds */
	binary_tree_t *rb028;

	/* ved dcds */
	if (tree == NULL
		|| tree->right == NULL)
	{
		return (NULL); /* ved dcds */
	}
	/* ved dcds */
	rb028 = tree->right; /* ved dcds */
	/* ved dcds */
	tree->right = rb028->left; /* ved dcds */
	if (rb028->left != NULL)
	{
		/* ved dcds */
		rb028->left->parent = tree; /* ved dcds */
	}
	/* ved dcds */
	rb028->left = tree; /* ved dcds */
	/* ved dcds */
	rb028->parent = tree->parent; /* ved dcds */
	/* ved dcds */
	tree->parent = rb028; /* ved dcds */
	/* ved dcds */
	return (rb028); /* ved dcds */
}
