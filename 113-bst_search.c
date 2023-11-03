#include "binary_trees.h"

/**
 * bst_search - searches for a value in a binary search tree
 * @tree: p to the root node of the BST to search
 * @value: value h in the tree
 *
 * Return: pointer to thelue equal to value, or NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	tmp = (bst_t *)tree;

	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);
		if (tmp->n < value)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	}

	return (NULL);
}
