#include "binary_trees.h"
/**
 * check_leaf_level - check if all leaf nodes are at the same level
 * @tree: pointer to the first node of the tree
 * Return: 1 if they are on the same level or 0 they aren't
 */
int check_leaf_level(const binary_tree_t *tree)
{
	if (!tree->left && !tree->right)

}
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the first node of the tree
 * Return: 1/0 if the tree is perfect/not or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		if (left == 0 && right == 0)
			return (0);
	}
	else
		return (check_leaf_level(tree));
}
