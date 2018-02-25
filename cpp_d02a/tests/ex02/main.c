/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stdio.h>
#include "generic_list.h"

static  void  int_displayer(void *data)
{
	int  value = *((int *)data);
	printf("%d\n", value);
}
static  int  int_compare(void *first , void *second)
{
	int  val1 = *((int *) first);
	int  val2 = *((int *) second);
	return (val1 - val2);
}
static  void  test_size(list_t  list_head)
{
	printf("There  are %u elements  in the  list\n", list_get_size(list_head));
	list_dump(list_head , &int_displayer);
}
static  void  test_del(list_t *list_head)
{
	list_del_elem_at_back(list_head);
	printf("There  are %u elements  in the  list\n", list_get_size (* list_head));
	list_dump (*list_head , &int_displayer);
}
int  main(void)
{
	list_t  list_head = NULL;
	int i = 5;
	int j = 42;
	int k = 3;
	list_add_elem_at_back (&list_head , &i);
	list_add_elem_at_back (&list_head , &j);
	list_add_elem_at_back (&list_head , &k);
	test_size(list_head);
	test_del (& list_head);
	return  0;
}
