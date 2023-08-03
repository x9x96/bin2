#include "binary_trees.h"


/**
 * binary_tree_uncle - wevvb v vds
 * @node: wevvb v vds
 *
 * Return: wevvb v vds
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* wevvb v vds */
	if (!node
		|| !node->parent)
	{
		/* wevvb v vds */
		return (NULL); /* wevvb v vds */
	}

	/* wevvb v vds */
	return (binary_tree_sibling(node->parent)); /* v vds */
}


/**
 * binary_tree_sibling - wevvb v vds
 * @node: wevvb v vds
 *
 * Return: wevvb v vds
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* wevvb v vds */
	if (!node
		|| !node->parent)
	{
		/* wevvb v vds */
		return (NULL); /* wevvb v vds */
	}

	/* wevvb v vds */
	if (node == node->parent->left)
		return (node->parent->right); /* wevvb v vds */
	
	/* wevvb v vds */
	return (node->parent->left); /* wevvb v vds */
}
