#include "binary_trees.h"

/**
 * is_root - function creates a binary tree node
 * @node: pointer to the parent  create
 * Return: pointer to the new node
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);
	else
		return (1);
}
