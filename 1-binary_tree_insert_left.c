#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure/ parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild, *tmp;

	if (parent == NULL)
		return (NULL);
	leftChild = binary_tree_node(parent, value);
	if (leftChild == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		tmp = parent->left;
		leftChild->left = tmp;
		tmp->parent = leftChild;
	}
	parent->left = leftChild;
	return (leftChild);
}
