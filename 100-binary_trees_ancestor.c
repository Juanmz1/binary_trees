#include "binary_trees.h"

/**
 * find_common_ancestor - Helper function to find the lowest common ancestor
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
static binary_tree_t *find_common_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	tmp = (binary_tree_t *)second;
	while (tmp)
	{
		if (first == tmp)
			return (binary_tree_t *)first;

		tmp = tmp->parent;
	}

	return (NULL);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !first->parent || !second || !second->parent)
		return (NULL);

	while (first)
	{
		binary_tree_t *common_ancestor =
			find_common_ancestor(first, second);
		if (common_ancestor)
			return (common_ancestor);

		first = first->parent;
	}

	    return (NULL);
}
