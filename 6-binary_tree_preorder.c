#include "binary_trees.h"
/**
 * binary_tree_preorder - go through the binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function to call for each node
 * Return: void/nothing if tree or func is NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
