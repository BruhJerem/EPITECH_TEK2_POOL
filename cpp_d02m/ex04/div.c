/*
** EPITECH PROJECT, 2018
** div
** File description:
** div
*/

#include "castmania.h"

int integer_div(int a, int b)
{
	if (b==0)
		return (0);
	return (a/b);
}

float decimale_div(int a, int b)
{
	float res;
	if (b==0)
		return (0);
	res=a/(float)b;
	return (res);
}

void exec_div(div_t *operation)
{
	if (operation->div_type == INTEGER) {
		((integer_op_t *) operation->div_op)->res =
			integer_div(((integer_op_t *) operation->div_op)->a,
				    ((integer_op_t *) operation->div_op)->b);
	}
	else if (operation->div_type == DECIMALE) {
		((decimale_op_t *) operation->div_op)->res =
			decimale_div(((decimale_op_t *) operation->div_op)->a,
				     ((decimale_op_t *) operation->div_op)->b);
	}
}
