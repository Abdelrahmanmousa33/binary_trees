#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert to
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error happens - NULL.
 *         Otherwise - pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
		return (NULL);

	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;
	return (NewNode);
}
