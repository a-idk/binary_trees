/* Title: Sibling */

#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: pointer to the node
 * @a_idk scripting
 *
 * Return: ptr to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* check for node/parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* is node a left child */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
