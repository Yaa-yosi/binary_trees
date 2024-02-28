#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with one child in a binary tree
 * @tree: pointer to the root node tocount leaves
 * Return: 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree)
	{
	       if (tree->left || tree->right)
		       return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
