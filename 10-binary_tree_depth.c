/* Title: Depth of Tree */

#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 *
 * @tree:pointer to the node
 * @a_idk scripting
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* checking for NULL value */
	if (tree == NULL)
		return (0);
	else
		return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
