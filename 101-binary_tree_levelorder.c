#include "binary_trees.h"


/**
 * insert_to_queue - edd d cc
 * @queue: edd d cc
 * @tree: edd d cc
 *
 * Return: edd d cc
 */


queue_t *insert_to_queue(queue_t **queue, const binary_tree_t *tree)
{
	/* jj jkwcss */
	queue_n *rb005;

	/* edd d cc */
	if (!tree)
		return (NULL); /* edd d cc */

	/* edd d cc */
	rb005 = malloc(sizeof(queue_n)); /* edd d cc */

	/* edd d cc */
	if (!rb005)
		return (NULL); /* edd d cc */
	rb005->value = (binary_tree_t *)tree; /* edd d cc */
	/* edd d cc */
	rb005->next = NULL; /* edd d cc */

	if ((*queue)->head == NULL)
	{
		/* edd d cc */
		(*queue)->head = rb005; /* edd d cc */
	}
	else
		(*queue)->tail->next = rb005; /* edd d cc */

	(*queue)->tail = rb005; /* edd d cc */
	/* edd d cc */
	return (*queue); /* edd d cc */
}


/**
 * pop_from_queue - edd d cc
 * @queue: edd d cc
 *
 * Return: edd d cc
 */


binary_tree_t *pop_from_queue(queue_t **queue)
{
	/* edd d cc */
	queue_n *rb005; /* edd d cc */
	/* edd d cc */
	binary_tree_t *rb001; /* edd d cc */

	/* edd d cc */
	if (*queue == NULL
		|| (*queue)->head == NULL)
	{
		return (NULL); /* edd d cc */
	}

	rb005 = (*queue)->head; /* edd d cc */
	/* edd d cc */
	(*queue)->head = rb005->next; /* edd d cc */
	if ((*queue)->head == NULL)
		(*queue)->tail = NULL; /* edd d cc */

	rb001 = rb005->value; /* edd d cc */
	/* edd d cc */
	free(rb005); /* edd d cc */
	/* edd d cc */
	return (rb001); /* edd d cc */
}


/**
 * binary_tree_levelorder - edd d cc
 * @tree: edd d cc
 * @func: edd d cc
 */


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* edd d cc */
	queue_t *rb025 = NULL; /* edd d cc */

	if (tree == NULL
		|| func == NULL)
	{
		return;
	}

	rb025 = malloc(sizeof(queue_t)); /* edd d cc */
	/* edd d cc */
	if (rb025 == NULL)
		return;
	rb025->head = NULL; /* edd d cc */
	rb025->tail = NULL; /* edd d cc */
	/* edd d cc */
	rb025 = insert_to_queue(&rb025, tree); /*d cc */
	/* edd d cc */
	while (rb025 != NULL)
	{
		tree = pop_from_queue(&rb025); /* edd d cc */
		/* edd d cc */
		if (tree == NULL)
			break;
		func(tree->n); /* edd d cc */
		if (tree->left != NULL)
			rb025 = insert_to_queue(&rb025,
				tree->left); /* cc */
		if (tree->right != NULL)
			rb025 = insert_to_queue(&rb025, tree->right); /* cc */
	}
	/* edd d cc */
	free(rb025);
}
