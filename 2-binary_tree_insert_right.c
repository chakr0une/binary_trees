#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: pointer to new node, or NULL on failure or if `parent` is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		insert_node->right = parent->right;
		parent->right->parent = insert_node;
	}
	parent->right = insert_node;
	return (insert_node);
}
