#include "binary_trees.h"

/**
 * preorder - function creates a binary tree node
 * @tree: pointer to the parent node create
 * @func: pointer
 * Return: pointer to the new node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
