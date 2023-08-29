#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the NewNode node
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - pointer to the NewNode node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
		return (NULL);

	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		NewNode->right = parent->right;
		parent->right->parent = NewNode;
	}
	parent->right = NewNode;

	return (NewNode);
}

