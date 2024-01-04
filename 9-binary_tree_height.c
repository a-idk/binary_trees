/* Title: Height of Binary Tree */

#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the of a binary tree
 *
 * @tree: pointer to the root node
 * @a_idk Scripting
 *
 * Return: tree heighr, or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declaring and initializing the variables */
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree != NULL)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
	else
		return (0);
}
