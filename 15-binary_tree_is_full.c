/* Title: Is full */

#include "binary_trees.h"
#include "binary_trees.h"

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
	else
		return (0);
}

/**
 * binary_tree_is_full - function that checks if binary tree is full
 *
 * @tree: pointer to the root node
 *
 * Return: 1 if true, else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* declaring variables */
	int lt; /* left side */
	int rt; /* right side */

	/* checking for NUll */
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	lt = binary_tree_is_full(tree->left), rt = binary_tree_is_full(tree->right);

	if (rt == 0 || lt == 0)
		return (0);

	return (1);
}
