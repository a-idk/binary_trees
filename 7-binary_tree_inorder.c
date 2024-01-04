/* Title: In-order traversal */

#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree using
 * in-order traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to function call for each node
 * @a_idk scripting
 *
 * Return: Nada!
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* check for NULL */
	if (func == NULL || tree == NULL)
		return;

	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
