#include "binary_trees.h"
/**
 * binary_tree_nodes - node with atleast 1 child
 * @root: pointer to the first node of the binary the tree
 * Return: number of non-leaf nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	node += (tree->left || tree->right) ? 1 : 0;
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);
	return (node);
}
