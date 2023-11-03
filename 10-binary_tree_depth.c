#include "binary_trees.h"

/**
 * binary_tree_depth - measures the dept
 * @tree:  pointer to the root node of the tree
 * Return: If tree is NULL return 0
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || (tree->parent == NULL))
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);

}
