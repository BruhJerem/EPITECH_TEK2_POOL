/*
** EPITECH PROJECT, 2018
** bitree
** File description:
** betree
*/

#include <stdio.h>
#include <stdlib.h>
#include "simple_btree.h"

bool_t	btree_is_empty(tree_t tree)
{
	if (tree)
		return (TRUE);
	return (FALSE);
}

unsigned int btree_get_size(tree_t tree)
{
	if (!tree)
		return (0);
	else
		return (btree_get_size(tree->left) + 1 + btree_get_size(tree->right));
}

unsigned int btree_get_depth(tree_t tree)
{
	unsigned int size=0;

	while (tree) {
		tree = tree->right;
		size++;
	}
	return (size);
}

/* Modifications */

static node_t *create_node(double value)
{
	node_t *node = malloc(sizeof(node_t));

	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

bool_t	btree_create_node(tree_t *root_ptr, double value)
{
	node_t *node = create_node(value);

	if (node == NULL)
		return (FALSE);
	*root_ptr = node;
	return (TRUE);
}

bool_t	btree_delete(tree_t *root_ptr)
{
	tree_t tree = *root_ptr;

	if (tree == NULL)
		return (FALSE);
	btree_delete(&(tree->left));
	btree_delete(&(tree->right));
	free(tree);
	return (TRUE);
}

/* Access */

double	btree_get_max_value(tree_t tree)
{
	if (!tree)
		return (0);
	double res = tree->value;
	if (tree->left) {
		double lres = btree_get_max_value(tree->left);
		if (lres > res)
			res = lres;
	}
	if (tree->right) {
		double rres = btree_get_max_value(tree->right);
		if (rres > res)
			res = rres;

	}
	return (res);
}

double	btree_get_min_value(tree_t tree)
{
	if (!tree) {
		return (0);
	}
        double res = tree->value;
	if (tree->left) {
		double lres = btree_get_min_value(tree->left);
		if (lres < res)
			res = lres;
	}
	if (tree->right) {
		double rres = btree_get_min_value(tree->right);
		if (rres < res)
			res = rres;
	}
        return (res);
}
