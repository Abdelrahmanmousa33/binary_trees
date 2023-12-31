#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height of.
 * Return: If tree is NULL 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		else
			left = 0;
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		else
			right = 0;
		return (left > right ? left : right);
	}
	return (0);

}
