/* Title: Is leaf */

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to node in check
 * @a_idk Scripting
 *
 * Return: 1 if true or 0 not or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if node is not null and does not have left & right child */
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
