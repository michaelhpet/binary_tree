#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a node as the right
* child of another node
* @parent: pointer to parent node
* @value: value of node to insert
* Return: pointer to created node, NULL if failed
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *prev_right;

	if (parent == NULL)
		return (NULL);

	prev_right = parent->right;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	parent->right = node;
	node->parent = parent;
	node->n = value;
	node->right = prev_right;
	if (prev_right)
		prev_right->parent = node;
	node->left = NULL;

	return (node);
}
