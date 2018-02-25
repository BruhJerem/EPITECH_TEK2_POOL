/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "simple_btree.h"
#include <stdio.h>
#include <stdlib.h>

static  void  populate_left(tree_t  tree)
{
	tree_t  left_sub_tree = tree ->left;
	btree_create_node (&( left_sub_tree ->left), 30);
	btree_create_node (&( left_sub_tree ->right), 5);
}
static  void  populate_tree(tree_t *tree)
{
	btree_create_node (tree , 42.5);
	btree_create_node (&((*tree)->right), 100);
	btree_create_node (&((*tree)->left), 20);
	populate_left (*tree);
}
static  void  test_size(tree_t  tree)
{
	unsigned  int  size = btree_get_size(tree);
	unsigned  int  depth = btree_get_depth(tree);
	printf("The  tree's size is %u\n", size);
	printf("The  tree's depth is %u\n", depth);
}
static  void  test_values(tree_t  tree)
{
	double  max = btree_get_max_value(tree);
	double  min = btree_get_min_value(tree);
	printf("The  tree's values  range  from %f to %f\n", min , max);
}
int  main(void)
{
	tree_t  tree = NULL;
	populate_tree (&tree);
	test_size(tree);
	test_values(tree);
	return  (0);
}
