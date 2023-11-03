#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointerot node of the BST to insert the value
 * @value: value to store in the n
 *
 * Description: If the address stored in tree is NULL, the created node must
 * become ty present in the tree, it must
 * be ignored
 *
 * Return: a pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = (bst_t *)binary_tree_node(NULL, value);
			return (*tree);
		}

		tmp = *tree;
		while (tmp)
		{
			if (tmp->n == value)
				break;
			if (tmp->n > value)
			{
				if (!tmp->left)
				{
					tmp->left = (bst_t *)binary_tree_node(tmp, value);
					return (tmp->left);
				}
				tmp = tmp->left;
			}
			else if (tmp->n < value)
			{
				if (!tmp->right)
				{
					tmp->right = (bst_t *)binary_tree_node(tmp, value);
					return (tmp->right);
				}
				tmp = tmp->right;
			}
		}
	}

	return (NULL);
}
