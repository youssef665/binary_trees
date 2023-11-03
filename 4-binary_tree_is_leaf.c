#include "binary_trees.h"

/**
 * is_leaf - function creates a binary tree node
 * @node: pointer to parent node
 * Return: pointer to the new node
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)

		return (0);
	else
		return (1);
}
