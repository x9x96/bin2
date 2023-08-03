#include "binary_trees.h"


/**
 * binary_tree_is_full -  jhvd j
 * @tree: jhvd j
 *
 * Return: jhvd j
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	/* jhvd j*/
	if (!tree)
	{
		/* jhvd j*/
		return (0); /* jhvd j*/
	}

	/* jhvd j*/
	if (!tree->right
		&& !tree->left)
	{
		/* jhvd j*/
		return (1); /* jhvd j*/
	}

	/* jhvd j*/
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right)); /* jhvd j*/

	return (0);
}
