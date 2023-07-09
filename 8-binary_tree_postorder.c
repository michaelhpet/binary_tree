#include "binary_trees.h"


/**
* binary_tree_postorder - Use postorder traversal
*
* The left subtree is traversed first.
* Then the right subtree is traversed.
* Finally, the root node of the subtree is traversed.
*
* @tree: Pointer to binary tree
* @func: Pointer to callback function
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
