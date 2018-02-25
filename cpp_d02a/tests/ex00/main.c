/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stdio.h>
#include "simple_list.h"

static  void  populate_list(list_t *list_head)
{
	list_add_elem_at_back(list_head , 5.2);
	list_add_elem_at_back(list_head , 42.5);
	list_add_elem_at_back(list_head , 3.3);
}
static  void  test_size(list_t  list_head)
{
	printf("There  are %u elements  in the  list\n", list_get_size(list_head));
	list_dump(list_head);
}
static  void  test_del(list_t *list_head)
{
	list_del_elem_at_back(list_head);
	printf("There  are %u elements  in the  list\n", list_get_size (* list_head));
	list_dump (* list_head);
}
int  main(void)
{
	list_t  list_head = NULL;
	populate_list (& list_head);
	test_size(list_head);
	test_del (& list_head);
	return  0;
}
