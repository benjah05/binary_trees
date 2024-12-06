#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if it's a root, 0 otherwise, 0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
