/* Title: Leaves */

#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node
 * @a_idk scripting
 *
 * Return: leaves count.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* initializing variable */
	size_t i = 0;

	/* checking for NULL value */
	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		i = i + ((!tree->left && !tree->right) ? 1 : 0);
		
		i = i + binary_tree_leaves(tree->left);
		
		i = i + binary_tree_leaves(tree->right);
	}

	return (i);
}
