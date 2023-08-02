#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = NULL;

	if (parent == NULL)
		return (NULL);
	tempNode = malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	if (parent->left == NULL)
		parent->left = tempNode;
	else
	{
		tempNode->left = parent->left;
		parent->left = tempNode;
		tempNode->left->parent = tempNode;
	}
	return (tempNode);
}
