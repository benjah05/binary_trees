#include "binary_trees.h"
/**
 * tree_height - measure tree height
 * @tree: pointer  of the first node of the tree
 * Return: heiht of the tree or 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int rightHeight = 0, leftHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = tree->left ? 1 + tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + tree_height(tree->right) : 0;
	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer ot the first node of the tree
 * Return: the balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, bal;

	if (tree == NULL)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	bal = left - right;
	return (bal);
}
