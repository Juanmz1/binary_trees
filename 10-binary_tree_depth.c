#include "binary_trees.h"

/**
 * binary_tree_depth - that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Retuen: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
