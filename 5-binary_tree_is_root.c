#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a give node is a root
 * @node: pointer to node to check
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
	}
	return (0);
}


