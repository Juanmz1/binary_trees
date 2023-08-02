#include "binary_tree.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *@tree: pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
