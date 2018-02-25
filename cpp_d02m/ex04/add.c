/*
** EPITECH PROJECT, 2018
** add
** File description:
** add
*/

#include "castmania.h"

int normal_add(int a, int b)
{
	return (a+b);
}

int absolute_add(int a, int b)
{
	if (a<0 || b<0)
		return ((a + b) * (-1));
	else
		return (a+b);
}

void exec_add(add_t *operation)
{
	if (operation->add_type == NORMAL) {
                (operation->add_op).res =
                        normal_add((operation->add_op).a,
				   (operation->add_op).b);
	}
	else if (operation->add_type == ABSOLUTE) {
		(operation->add_op).res =
                        absolute_add((operation->add_op).a,
				     (operation->add_op).b);
	}

}
