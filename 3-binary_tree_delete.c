#include "binary_trees.h"

/**
 * tree_delete - delete tree
 * @tree: pointer to the parent
 * Return: 
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
