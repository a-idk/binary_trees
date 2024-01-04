/* Title: Balance Factor */

#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height of
 * @a_idk scripting
 *
 * Return: tree height
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

/* #include "binary_trees.h> */

/**
 * binary_tree_balance - function that measures the balance factor of
 * binary tree
 *
 * @tree: pointer to the root node
 * @a_idk scripting
 *
 * Return: balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	/* int lt; * left side */
	/*int rt; * right side */

	/* checking for NULL */
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	/* lt = binary_tree_height(tree->left),rt = binary_tree_height(tree->right);*/
	 /* return (lt - rt); */
}
