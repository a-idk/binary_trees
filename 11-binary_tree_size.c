/* Title: Size of Tree */

#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node
 * @a_idk scripting
 *
 * Return: size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* variables declaration */
	size_t lt; /* left */
	size_t rt; /* right */
	size_t result;

	/* checking for NULL */
	if (tree == NULL)
		return (0);

	lt = binary_tree_size(tree->left), rt = binary_tree_size(tree->right);
	result = 1 + lt + rt;

	return (result);
}
