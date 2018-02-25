/*
** EPITECH PROJECT, 2018
** mem
** File description:
** ptdr
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mem_ptr.h"

void add_str(char *str1 , char *str2 , char **res)
{
	*res=malloc(sizeof(char) * (strlen(str1) + strlen(str2)));
	if (res == NULL)
		return ;
	strcat(*res, str1);
	strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
	add_str(str_op->str1, str_op->str2, &str_op->res);
}
