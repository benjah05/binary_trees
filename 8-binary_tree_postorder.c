#include "binary_trees.h"
/**
 * binary_tree_postorder - go through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer ot the a function to call on each node
 * Return: nothing if tree or func
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
