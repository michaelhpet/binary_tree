#include "binary_trees.h"


/**
* binary_tree_delete - Delete an entire binary tree
* @tree: pointer to binary tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
