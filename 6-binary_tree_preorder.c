/* Title: Pre-order traversal */

#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree using
 * using pre-order traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to function call for each node
 * @a_idk scripting
 *
 * Return: Nada!
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* check for NULL */
	if (func == NULL || tree == NULL)
		return;

	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
