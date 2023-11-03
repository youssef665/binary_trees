#include <stdio.h>
#include "binary_trees.h"

/**
 * is_full - check if bie is full
 * @tree: pointer to the the tree
 * Return: function
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	
	return (0);
}
