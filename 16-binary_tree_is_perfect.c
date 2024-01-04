/* Title: Is perfect */

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


/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to node in check
 * @a_idk Scripting
 *
 * Return: 1 if true or 0 not or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if node is not null and does not have left & right child */
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}



/**
 * binary_tree_is_perfect - function that checks if binary tree is perfect
 *
 * @tree: pointer to the root node
 * @a_idk scripting
 *
 * Return: 1 if true or 0 not of NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* declaring variables */
	binary_tree_t *lt;
	binary_tree_t *rt;

	/* checking for NULL */
	if (tree == NULL)
		return (0);

	lt = tree->left, rt = tree->right;

	/* checking the value of the called func */
	if (binary_tree_is_leaf(tree))
		return (1);

	if (rt == NULL)
		return (0);
	if (lt == NULL)
		return (0);

	if (binary_tree_height(rt) == binary_tree_height(lt))
	{
		if (binary_tree_is_perfect(rt) && binary_tree_is_perfect(lt))
			return (1);
	}

	return (0);
}
