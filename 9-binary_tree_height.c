#include "binary_trees.h"


/**
* binary_tree_height - Measure the height of a binary tree
* @tree: Pointer to binary tree
* Return: Height of binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h, hleft, hright;

	if (!tree)
		return (0);

	hleft = tree->left ? (1 + binary_tree_height(tree->left)) : 0;
	hright = tree->right ? (1 + binary_tree_height(tree->right)) : 0;
	h = (hleft > hright) ? hleft : hright;
	return (h);
}
