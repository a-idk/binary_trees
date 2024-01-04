/* Title: New node */
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: parent node
 * @value: data in new node
 * @a_idk scripting
 *
 * Return: typedef pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
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
