#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the address of the node
 * Return: address of the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	else if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}