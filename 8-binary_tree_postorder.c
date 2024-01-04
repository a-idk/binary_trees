/* Title: Post-order traversal */

#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree using
 * post-order traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to function call for each node
 * @a_idk scripting
 *
 * Return: Nada!
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* check for NULL */
	if (func == NULL || tree == NULL)
		return;

	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
