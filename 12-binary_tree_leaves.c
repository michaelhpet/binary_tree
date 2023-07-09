#include "binary_trees.h"


/**
* binary_tree_leaves - Count the leaves in a binary tree
* @tree: Pointer to binary tree
* Return: Number of leaves in binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (leaves);

	if (!tree->left && !tree->right)
		leaves++;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
