#include "binary_trees.h"


/**
 * binary_trees_ancestor - jj jkwcss
 * @rb020: jj jkwcss
 * @rb021: jj jkwcss
 *
 * Return: jj jkwcss
 */


binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *rb020, const binary_tree_t *rb021)
{
	/* jj jkwcss */
	binary_tree_t *rb024; 
	binary_tree_t *rb022;
	binary_tree_t *rb023;

	if (rb020 == NULL
		|| rb021 == NULL)
		return (NULL); /* jj jkwcss */

	/* jj jkwcss */
	rb022 = (binary_tree_t *)rb020; /* jj jkwcss */
	/* jj jkwcss */
	rb023 = (binary_tree_t *)rb021; /* jj jkwcss */

	/* jj jkwcss */
	while (rb022)
	{
		/* jj jkwcss */
		rb024 = rb023; /* jj jkwcss */

		/* jj jkwcss */
		while (rb024)
		{
			/* jj jkwcss */
			if (rb022 == rb024)
				return (rb022); /* jj jkwcss */
			/* jj jkwcss */
			rb024 = rb024->parent; /* jj jkwcss */
		}
		/* jj jkwcss */
		rb022 = rb022->parent; /* jj jkwcss */
	}

	return (NULL);
}
