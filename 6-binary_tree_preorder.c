#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes
 *through a binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: pointer to function to call for each node; value in the node is
 * passed as a parameter to `func`
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
