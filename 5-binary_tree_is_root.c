/* Title: Is root */

#include "binary_trees.h"

/**
 * binary_tree_is_root - functio that checks if a given node is a root
 *
 * @node: pointer to the node
 * @a_idk scripting
 *
 * Return: 1 if true, else 0 not or NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0); /* false -  not root */
	else
		return (1); /* true - is root */
}
