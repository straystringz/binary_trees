#include "binary_trees.h"
/**
*binary_tree_is_leaf - checks if a node is a leaf
*@node: the node to check
*Return: 0 on sucess 1 on failure
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
