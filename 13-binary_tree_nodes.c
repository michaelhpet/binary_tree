#include "binary_trees.h"


/**
* binary_tree_nodes - Count the nodes with at lease 1 child
* @tree: Pointer to binary tree
* Return: Number of parent nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (nodes);

	if (tree->left || tree->right)
		nodes++;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
