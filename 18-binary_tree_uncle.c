#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL ||
	if (node->parent->parent->left == node->parent)
		node->parent->parent == NULL)
		return (NULL);
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
