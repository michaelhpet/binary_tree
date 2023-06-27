#include "binary_trees.h"

/**
* binary_tree_node - create a binary tree node
* @parent: a pointer to the parent node to create
* @value: the value to put in the new node
* Return: pointer to new node, NULL if error
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
