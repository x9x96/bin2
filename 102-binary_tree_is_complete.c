#include "binary_trees.h"


/**
 * binary_tree_is_complete - dkj k cc
 * @tree: dkj k cc
 *
 * Return: dkj k cc
 */


int binary_tree_is_complete(const binary_tree_t *tree)
{
	/* dkj k cc */
	size_t rb026; /* dkj k cc */

	/* dkj k cc */
	if (tree == NULL)
	{
		/* dkj k cc */
		return (0); /* dkj k cc */
	}

	/* dkj k cc */
	rb026 = binary_tree_size(tree); /* dkj k cc */
	/* dkj k cc */
	return (btic_helper(tree,
		0, rb026)); /* dkj k cc */
}


/**
 * btic_helper - dkj k cc
 * @tree: dkj k cc
 * @index: dkj k cc
 * @size: dkj k cc
 *
 * Return: dkj k cc
 */


int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	/* dkj k cc */
	if (tree == NULL)
		return (1); /* dkj k cc */

	/* dkj k cc */
	if (index >= size)
		return (0); /* dkj k cc */

	/* dkj k cc */
	return (btic_helper(tree->left,
		2 * index + 1, size) &&
		btic_helper(tree->right,
		2 * index + 2, size)); /* dkj k cc */
}


/**
 * binary_tree_size - dkj k cc
 * @tree: dkj k cc
 *
 * Return: dkj k cc
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	/* dkj k cc */
	if (tree == NULL)
		return (0); /* dkj k cc */

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1); /* k cc */
}
