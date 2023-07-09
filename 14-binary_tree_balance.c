#include "binary_trees.h"


/**
* binary_tree_balance - Measure the balance factor of a binary tree
* @tree: Pointer to binary tree
* Return: Balance factor of binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lheight, rheight;
	int balance = 0;

	if (!tree)
		return (balance);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	return (lheight - rheight);
}


/**
* binary_tree_height - Measure the height of a binary tree
* @tree: Pointer to binary tree
* Return: Height of binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, hleft = 0, hright = 0;

	if (!tree)
		return (h);

	hleft = tree->left ? (1 + binary_tree_height(tree->left)) : 1;
	hright = tree->right ? (1 + binary_tree_height(tree->right)) : 1;
	h = (hleft > hright) ? hleft : hright;
	return (h);
}
