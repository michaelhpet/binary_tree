#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a node ad the left
* child of another node
* @parent: pointer to parent node
* @value: value of node to insert
* Return: pointer to created node, NULL if failed
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *prev_left;

	if (parent == NULL)
		return (NULL);

	prev_left = parent->left;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	parent->left = node;
	node->parent = parent;
	node->n = value;
	node->left = prev_left;
	if (prev_left)
		prev_left->parent = node;
	node->right = NULL;

	return (node);
}
