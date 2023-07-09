#include "binary_trees.h"


/**
* binary_tree_preorder - Use preorder traversal
*
* Visits the root node first, followed by the left subtree,
* and then the right subtree.
*
* @tree: Pointer to binary tree
* @func: Pointer to callback function for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
