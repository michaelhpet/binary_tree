#include "binary_trees.h"


/**
* binary_tree_size - Measure the size of a binary tree
* @tree: Pointer to binary tree
* Return: Size of binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);

	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
