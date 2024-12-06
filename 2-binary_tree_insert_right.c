#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure/ parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild, *tmp;

	if (parent == NULL)
		return (NULL);
	rightChild = binary_tree_node(parent, value);
	if (rightChild == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		tmp = parent->right;
		rightChild->right = tmp;
		tmp->parent = rightChild;
	}
	parent->right = rightChild;
	return (rightChild);
}
