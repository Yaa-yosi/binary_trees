#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to the root node
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0, b = 0, balance;
	
	if (tree)
	{
		if ((tree->left && !tree->right) || (tree->right && !tree->left))
			return (-1);
		if (tree->left)
			a = (int)binary_tree_height(tree->left);
		if (tree->right)
			b = (int)binary_tree_height(tree->right);
	}
	balance = a - b;
	return (balance);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node to measure height
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);
	if (height_l > height_r)
		return (height_l);

	else
		return (height_r);
}
