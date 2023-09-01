#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves of.
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (tree->left && tree->right ?
			   binary_tree_leaves(tree->right) +
			   binary_tree_leaves(tree->left) : 1);
		return (leaves);
	}
	return (0);
}
