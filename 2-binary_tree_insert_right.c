/* Title: Insert Right */

#include "binary_trees.h"

/**
 * create_treer - function that creates binary tree node
 * @parent: parent node
 * @value: value
 * @a_idk scripting
 *
 * Return: pointer ew node
 */

binary_tree_t *create_treer(binary_tree_t *parent, int value)
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
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 *
 * @parent: pointer to the node for right-child insertion
 * @value: value
 * @a_idk scripting
 *
 * Return: pointer to the newly created left node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* declaring variable */
	binary_tree_t *new; /* right child */

	/* checking for NULL value in parent */
	if (parent == NULL)
		return (NULL);

	new = create_treer(parent, value);
	/* checking for NUll value in the created node */
	if (new == NULL)
		return (NULL);

	new->right = parent->right;
	/* inserting value*/
	if (new->right != NULL)
		new->right->parent = new;
	parent->right = new;
	return (new);
}
