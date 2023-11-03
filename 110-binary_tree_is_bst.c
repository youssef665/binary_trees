#include "binary_trees.h"
#include <stdio.h>

/**
 * greater_than - check if all values in the tree are gre
 * @tree: pointer to the tree to check
 * @val: value to check against
 *
 * Return: 1 if true, 0 if false
 */

int greater_than(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);

	if (tree->n > val)
	{
		l = greater_than(tree->left, val);
		r = greater_than(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * less_than - check if all values in the tree
 * @tree: pointer
 * @val: value to check against
 *
 * Return: 1 if true, 0 if false
 */

int less_than(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);

	if (tree->n < val)
	{
		l = less_than(tree->left, val);
		r = less_than(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary
 * @tree: pointer to the root node of t
 *
 * Return: 1 if tree is a valid BST
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (less_than(tree->left, tree->n) && greater_than(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}

	}
	return (0);
}
