/*
** EPITECH PROJECT, 2018
** 4
** File description:
** 4
*/

#include <stdio.h>
#include "castmania.h"

int integer_div(int a, int b);
float decimale_div(int a, int b);
void exec_div(div_t *operation);
int normal_add(int a, int b);
int absolute_add(int a, int b);
void exec_add(add_t *operation);
void exec_operation(instruction_type_t instruction_type , void *data);
void exec_instruction(instruction_type_t instruction_type , void *data);

static  void  test_print(void)
{
	int i = 5;
	float f = 42.5;
	printf("Print i : ");
	exec_instruction(PRINT_INT , &i);
	printf("Print f : ");
	exec_instruction(PRINT_FLOAT , &f);
}
static  void  test_add_op(integer_op_t *int_op , instruction_t *inst)
{
	add_t  add;
	add.add_type = ABSOLUTE;
	add.add_op = *int_op;
	inst ->operation = &add;
	printf("10 + 3 = ");
	exec_instruction(ADD_OPERATION , &inst);
	printf("Indeed  10 + 3 = %d\n\n", add.add_op.res);
}
static  void  test_div_op(integer_op_t *int_op , instruction_t *inst)
{
	div_t  div;
	div.div_type = INTEGER;
	div.div_op = int_op;
	inst ->operation = &div;
	printf("10 / 3 = ");
	exec_instruction(DIV_OPERATION , &inst);
	printf("Indeed  10 / 3 = %d\n\n", int_op->res);
}
static  void  test_operations(void)
{
	integer_op_t  int_op;
	instruction_t  inst;
	int_op.a = 10;
	int_op.b = 3;
	inst.output_type = VERBOSE;
	test_add_op (&int_op , &inst);
	test_div_op (&int_op , &inst);
}
int  main(void)
{
	test_print ();
	printf("\n");
	test_operations ();
	return  (0);
}
