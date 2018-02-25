/*
** EPITECH PROJECT, 2018
** test 1
** File description:
** 1
*/

#include <stdio.h>
#include "../ex01/mem_ptr.h"

void add_str(char *str1, char *str2, char **res);
void add_str_struct(str_op_t *str_op);

static  void  test_add_str(void)
{
	char *str1 = "Hey , ";
	char *str2 = "it  works!";
	char *res;
	add_str(str1 , str2 , &res);
	printf("%s\n", res);
}
static  void  test_add_str_struct(void)
{
	char *str1 = "Hey , ";
	char *str2 = "it  works!";
	str_op_t  str_op;
	str_op.str1 = str1;
	str_op.str2 = str2;
	add_str_struct (& str_op);
	printf("%s\n", str_op.res);
}

int  main(void)
{
	test_add_str();
	test_add_str_struct();
	return  (0);
}
