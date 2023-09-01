#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth of.
 * Return: If tree is NULL 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree->parent && tree)
	{
		depth = binary_tree_depth(tree->parent);
		return (depth + 1);
	}
	return (0);
}
