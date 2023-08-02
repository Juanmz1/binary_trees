#include "binary_trees.h"

/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Retuen: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;
		int root = 1;
		
		if (tree->left)
			left = root + binary_tree_height(tree->left);
		if (tree->right)
			right = root + binary_tree_height(tree->left);
		if (right > left)
			return (right);
		else
			return (left);
	}
	else
		return (0);
}
