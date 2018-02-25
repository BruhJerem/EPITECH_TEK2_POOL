/*
** EPITECH PROJECT, 2018
** func_ptr
** File description:
** c
*/

#include "func_ptr.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void (*tab[4])(char *) = {print_normal, print_reverse
				 , print_upper, print_42};

void print_normal(char *str)
{
	printf("%s\n", str);
}

void print_reverse(char *str)
{
	for (int i=strlen(str)-1; i!=-1; i--)
		printf("%c", str[i]);
	printf("\n");
}

void print_upper(char *str)
{
	while (*str != '\0')
	{
		printf("%c", toupper(*str));
		str++;
	}
	printf("\n", str);
}
void print_42(char *str)
{
	(void)str;
	printf("42\n");
}

void do_action(action_t action , char *str)
{
	tab[action](str);
}
