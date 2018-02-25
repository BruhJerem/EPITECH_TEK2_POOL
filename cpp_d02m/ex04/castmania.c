/*
** EPITECH PROJECT, 2018
** cast
** File description:
** cast
*/

#include "castmania.h"
#include <stdio.h>

void exec_operation(instruction_type_t instruction_type , void *data)
{
	int res;

	if (instruction_type == ADD_OPERATION) {
		exec_add((add_t*)data);
		res=((add_t*)data)->add_op->res;
	}
	else if (instruction_type==DIV_OPERATION) {
		exec_div((div_t*)data);
		res=((div_t*)data)->((integer_op_t*) div_op).res;
	}
	if ((instruction_t)data.output_type == VERBOSE) {
		printf("%d\n", res);
	}
		
}

void exec_instruction(instruction_type_t instruction_type , void *data)
{

}
