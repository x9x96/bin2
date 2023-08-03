#include "binary_trees.h"


/**
 * _bst_min_node - jjbej c dvc
 * @rb004: jjbej c dvc
 *
 * Return: jjbej c dvc
 */


bst_t *_bst_min_node(bst_t *rb004)
{
	/* jjbej c dvc */
	if (rb004 == NULL)
		return (NULL); /* jjbej c dvc */
	/* jjbej c dvc */
	while (rb004 != NULL && rb004->left != NULL)
		rb004 = rb004->left; /* jjbej c dvc */
	return (rb004); /* jjbej c dvc */
}


/**
 * bst_remove - wvv d
 * @root: av d
 * @value: vvevs av
 *
 * Return: dd df 
 */


bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *rb031;

	/* jjbej c dvc */
	if (root == NULL)
		return (NULL); /* jjbej c dvc */
	/* jjbej c dvc */
	if (value == root->n)
	{
		if (root->right == NULL)
		{
			rb031 = root->left; /* jjbej c dvc */
			free(root); /* jjbej c dvc */
			return (rb031); /* jjbej c dvc */
		}
		else if (root->left == NULL)
		{
			rb031 = root->right; /* jjbej c dvc */
			free(root); /* jjbej c dvc */
			return (rb031); /* jjbej c dvc */
		}
		else
		{
			rb031 = _bst_min_node(root->right);
			root->n = rb031->n; /* jjbej c dvc */
			root->right = bst_remove(root->right, rb031->n);
			if (root->right)
				root->right->parent = root; /* jjbej c dvc */
		}
	}
	else if (value < root->n)
	{
		root->left = bst_remove(root->left, value); /* dvc */
		if (root->left)
			root->left->parent = root; /* jjbej c dvc */
	}
	else
	{
		root->right = bst_remove(root->right, value); /* dvc */
		if (root->right)
			root->right->parent = root; /* jjbej c dvc */
	}
	return (root); /* jjbej c dvc */
}
