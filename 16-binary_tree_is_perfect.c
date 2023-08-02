#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *@tree: pointer to the root node of the tree to check.
 * Return: if tree is NULL, function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
