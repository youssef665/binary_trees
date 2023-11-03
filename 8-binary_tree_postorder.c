#include "binary_trees.h"

/**
 * postorder - function creates tree node
 * @tree: pointer to the parent node
 * @func: pointer of function
 * Return: pointer to the new node, or NULL on failure
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
