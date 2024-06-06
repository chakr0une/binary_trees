#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* root is null */
	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		if ((!tree->left->left && !tree->left->right) &&
		    (!tree->right->left && !tree->right->right))
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	else if (!(tree->parent))
		/* root with no branches */
		return (1);

	/* leaf reached */
	return (0);
}
