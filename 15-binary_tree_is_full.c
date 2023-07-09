#include "binary_trees.h"

int full(const binary_tree_t *tree);

/**
* binary_tree_is_full - Check if a binary tree is full
* @tree: Pointer to binary tree
* Return: 1 if binary tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (full(tree));
}

/**
* full - Check if binary tree is full
* @tree: Pointer to binary tree
* Return: 1 if full, 0 otherwise
*/
int full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((tree->left && !tree->right) ||
			(!tree->left && tree->right) ||
			!full(tree->left) ||
			!full(tree->right))
		return (0);
	else
		return (1);
}
