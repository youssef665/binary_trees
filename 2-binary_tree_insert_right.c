#include "binary_trees.h"

/**
 * insert_right - function creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to put
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;

	if (parent == NULL)
		return (NULL);

	nodo = binary_tree_node(parent, value);
	if (nodo == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = nodo;
	}
	else
	{
		nodo->right = parent->right;
		parent->right = nodo;
		
		nodo->right->parent = nodo;
	}

	return (nodo);
}
