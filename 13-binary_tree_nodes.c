/* Title: Nodes */

#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 *
 * @tree: pointer to the root node
 * @a_idk scripting
 *
 * Return: nodes count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* initializing variable */
	/* size_t i = 0; */

	/* checking for NULL value */
	if (tree == NULL)
		return (0);

	return ((tree->left != NULL || tree->right != NULL) +
		binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
	/*
	 * if (tree != NULL)
	 * {
	 * i = i + ((!tree->left && !tree->right) ? 1 : 0);
	 * i = i + binary_tree_nodes(tree->left);
	 * i = i + binary_tree_nodes(tree->right);
	 * }
	 * return (i);
	 */
}
