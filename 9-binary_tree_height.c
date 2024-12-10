#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root of node of the tree to measure
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightHeight = 0, leftHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}
