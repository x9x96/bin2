#include "binary_trees.h"


/**
 * binary_tree_rotate_right - bvfjvvk  dcd
 * @tree: bvfjvvk
 * Return: bvfjvvk
 */


binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	/* bvfjvvk */
	binary_tree_t *rb028; /* bvfjvvk */

	/* bvfjvvk */
	if (tree == NULL
		|| tree->left == NULL)
	{
		/* bvfjvvk */
		return (NULL); /* bvfjvvk */
	}
	/* bvfjvvk */
	rb028 = tree->left; /* bvfjvvk */
	/* bvfjvvk */
	tree->left = rb028->right; /* bvfjvvk */
	/* bvfjvvk */
	if (rb028->right != NULL)
	{
		/* bvfjvvk */
		rb028->right->parent = tree; /* bvfjvvk */
	}
	/* bvfjvvk */
	rb028->right = tree; /* bvfjvvk */
	/* bvfjvvk */
	rb028->parent = tree->parent; /* bvfjvvk */
	/* bvfjvvk */
	tree->parent = rb028; /* bvfjvvk */
	/* bvfjvvk */
	return (rb028); /* bvfjvvk */
}
