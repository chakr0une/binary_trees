#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node as the left-child of another node
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: pointer to new node, or NULL on failure or if `parent` is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	insert_node = binary_tree_node(parent, value);
	if (insert_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		insert_node->left = parent->left;
		parent->left->parent = insert_node;
	}
	parent->left = insert_node;
	return (insert_node);
}
