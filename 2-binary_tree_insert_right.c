#include "binary-trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = NULL;

	tempNode = malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	if (parent->right == NULL)
		parent->right = tempNode;
	else
	{
		tempNode->right = parent->right;
		parent->right = tempNode;
		tempNode->right->parent = tempNode;
	}
	return (tempNode);
}
