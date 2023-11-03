#include "binary_trees.h"

/**
* menor_elemento - todo.
* @nodo: todo.
* Return: todo.
*/

bst_t *menor_elemento(bst_t *nodo)
{
	while (nodo->left)
		nodo = nodo->left;

	return (nodo);

}

/**
 * bst_remove - Remove a node from a bina
 * @root: Pointer to the r
 * @value: The value
 *
 * Return: A pointer to t
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *holder = NULL;

	if (!root)
		return (NULL);

	if (root->n > value)
		root->left = bst_remove(root->left, value);
	else
		if (root->n < value)
			root->right = bst_remove(root->right, value);
		else
		{
			if (root->left && root->right)
			{
				holder = menor_elemento(root->right);
				root->n = holder->n;
				root->right = bst_remove(root->right, holder->n);
			}
			else
			{
				if (!root->left && !root->right)
				{
					free(root);
					return (NULL);
				}
				holder = root;
				if (!root->left)
					root = root->right;
				else
					if (!root->right)
						root = root->left;
				if (holder->parent->left == holder)
					holder->parent->left = root;
				else
					holder->parent->right = root;
				root->parent = holder->parent;
				free(holder);
			}
		}

	return (root);
}
