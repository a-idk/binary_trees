/* Title: Insert left */

#include "binary_trees.h"

/**
 * create_treel: function that creates binary tree node
 * @parent: parent node
 * @value: value
 * @a_idk scripting
 *
 * Return: pointer ew node
 */

binary_tree_t *create_treel(binary_tree_t *parent, int value)
{
	/* variable declaration */
	binary_tree_t *new_n; /* new_n = new node */

	/* allocating dynamic memory */
	new_n = malloc(sizeof(binary_tree_t));

	/* check for NULL or zero value */
	if (new_n == NULL)
		return (NULL);
	
	new_n->parent = parent, new_n->n = value, new_n->left = new_n->right = NULL;
	return (new_n);
}

/**
 * binary_tree_insert_left - functio that inserts a node as the left-child of
 * another node
 *
 * @parent: pointer to the node for left-child insertion
 * @value: value
 * @a_idk scripting
 *
 * Return: pointer to the newly created left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* declaring variable */
	binary_tree_t *new; /* left child */

	/* checking for NULL value in parent */
	if (parent == NULL)
		return (NULL);

	new = create_treel(parent, value);
	/* checking for NUll value in the created node */
	if (new == NULL)
		return (NULL);

	new->left = parent->left;
	/* inserting value*/
	if (new->left != NULL)
		new->left->parent = new;
	parent->left = new;
	return (new);
}
