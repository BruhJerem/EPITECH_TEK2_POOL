/*
** EPITECH PROJECT, 2018
** ex3
** File description:
** 3
*/

#include <stdlib.h>
#include "func_ptr_enum.h"

#include "../tests/func_ptr_enum.h"

int  main(void)
{
	char *str = "I'm using  function  pointers!";
	do_action(PRINT_NORMAL , str);
	do_action(PRINT_REVERSE , str);
	do_action(PRINT_UPPER , str);
	do_action(PRINT_42 , str);
	return  (0);
}
