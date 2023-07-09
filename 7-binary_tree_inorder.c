#include "binary_trees.h"


/**
* binary_tree_inorder - Use inorder traversal
*
* First visits the left child (including its entire subtree),
* then visits the node, and finally visits the right child
* (including its entire subtree)
*
* @tree: Pointer to tree to traverse
* @func: Pointer to callback function
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
