/* Title: Level-order traversal */

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
 * bin_lev - function that performs function on a specific level
 * of a binary tree
 *
 * @root_ptr: pointer to the root
 * @lvl: level of the tree
 * @fxn: function to perform
 * @a_idk scripting
 *
 * Return: Nada!
 */

void bin_lev(const binary_tree_t *root_ptr, size_t lvl,
		void (*fxn)(int))
{
	/* check for NULL */
	if (root_ptr == NULL)
		return;

	if (lvl == 1)
		fxn(root_ptr->n);
	else if (lvl > 1)
		bin_lev(root_ptr->left, lvl - 1, fxn), bin_lev(root_ptr->right, lvl - 1, fxn);
}


/**
 * binary_tree_levelorder - function that traverses a binary tree using level-order traversal
 *
 * @tree: root pointer
 * @func: function pointer
 * @a_idk scripting
 *
 * Return: Nada!
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* variables declaration */
	size_t count;
	size_t h; /* height */

	/* checking for NULL */
	if (tree == NULL || func == NULL)
		return;

	h = binary_tree_height(tree);

	for (count = 1; count <= h; count += 1)
		bin_lev(tree, count, func);
}
