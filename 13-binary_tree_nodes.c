#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * @tree: pointer to the root nodee
 * Return: count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right, count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	count = left + right + 1;

	return (count);
}
