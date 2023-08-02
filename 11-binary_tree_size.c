#include "binary_trees.h"

/**
 * binary_tree_size - that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_n, right_n;

	if (tree == NULL)
		return (0);
	left_n = binary_tree_size(tree->left);
	right_n = binary_tree_size(tree->right);
	return (1 + left_n + right_n);
}
