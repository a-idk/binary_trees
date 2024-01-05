/* Title: Lowest common ancestor */

#include "binary_trees.h"


/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 *
 * @first: 1st node pointer
 * @second: 2nd node pointer
 * @a_idk scripting
 *
 * Return: lowest ancestor pointer
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	/* declaring variable */
	binary_tree_t *node2_temp;

	/* Checking for NULL */
	if (first == NULL || second == NULL)
		return (NULL);

	node2_temp = (binary_tree_t *)second;

	/* while (first != NULL) */
	for (; first != NULL; first = first->parent)
	{
		for (; second != NULL; second = second->parent)
		{
			if (first == second)
				return ((binary_tree_t *)first);
		}
		second = node2_temp;
	}
	return (NULL);
}
