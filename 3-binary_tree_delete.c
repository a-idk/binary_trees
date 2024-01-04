/* Title: Delete */

#include "binary_trees.h"

/**
 * binary_tree_delete: function that deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree
 * @a_idk scripting
 *
 * Return: Nada!
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* check for NULL */
	if (tree == NULL)
		return;
	else
	{
		binary_tree_delete(tree->left), binary_tree_delete(tree->right);
		free(tree);
	}
}
