#include "binary_trees.h"


/**
 * binary_tree_is_perfect - hvhvdh  dd
 * @tree: hvhvdh  dd
 *
 * Return: hvhvdh  dd
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* hvhvdh  dd */
	size_t rb015 = 0;

	/* hvhvdh  dd */
	size_t rb016 = 0;

	/* hvhvdh  dd */
	size_t rb017 = 0;

	if (!tree)
		return (0); /* hvhvdh  dd */

	if (!tree->right && !tree->left)
	{
		/* hvhvdh  dd */
		return (1);
	}

	/* hvhvdh  dd */
	rb015 = binary_tree_height(tree); /* hvhvdh  dd */
	/* hvhvdh  dd */
	rb016 = binary_tree_size(tree); /* hvhvdh  dd */

	rb017 = (size_t)_pow_recursion(2, rb015 + 1); /* dd */
	/* hvhvdh  dd */
	return (rb017
		- 1 == rb016); /* hvhvdh  dd */
}


/**
 * _pow_recursion - wevvb v vds
 * @rb018: wevvb v vds
 * @rb019: wevvb v vds
 *
 * Return: wevvb v vds
 */


int _pow_recursion(int rb018, int rb019)
{
	/* wevvb v vds */
	if (rb019 < 0)
	{
		/* wevvb v vds */
		return (-1);
	}

	/* wevvb v vds */
	if (rb019 == 0)
	{
		/* wevvb v vds */
		return (1);
	}
	
	/* wevvb v vds */
	else
		return (rb018
			* _pow_recursion(rb018, rb019 - 1)); /* wevvb v vds */

}


/**
 * binary_tree_size - wevvb v vds
 * @tree: wevvb v vds
 *
 * Return: wevvb v vds
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	/* wevvb v vds */
	if (!tree)
		return (0); /* wevvb v vds */

	/* wevvb v vds */
	return (binary_tree_size(tree->left)
		+ binary_tree_size(tree->right) + 1); /* vds */
}


/**
 * binary_tree_height - wevvb v vds
 * @tree: wevvb v vds
 *
 * Return: wevvb v vds
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	/* wevvb v vds */
	size_t rb007 = 0; /* wevvb v vds */

	/* wevvb v vds */
	size_t rb008 = 0; /* wevvb v vds */

	/* wevvb v vds */
	if (!tree)
		return (0); /* wevvb v vds */

	rb007 = tree->left ? 1
		+ binary_tree_height(tree->left) : 0; /* v vds */

	/* wevvb v vds */
	rb008 = tree->right ? 1
		+ binary_tree_height(tree->right) : 0; /* v vds */

	/* wevvb v vds */
	return (rb007 > rb008 ? rb007 : rb008); /* wevvb v vds */
}
