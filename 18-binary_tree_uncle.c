/* Title: Uncle */

#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: pointer to the node
 * @a_idk scripting
 *
 * Return: ptr to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* check for node/parent/parent-parent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* is uncle present in as parent-parent left child */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
