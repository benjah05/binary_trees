#include "binary_trees.h"
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer ot the first node of the tree
 * Return: 1/0 if the tree is full/not or 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left == 0 || right == 0)
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
