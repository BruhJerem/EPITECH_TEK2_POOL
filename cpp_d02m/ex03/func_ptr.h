/*
** EPITECH PROJECT, 2018
** ptdr
** File description:
** oui
*/

#ifndef FUNC_PTR_H
# define FUNC_PTR_H

typedef enum action_e
{
		PRINT_NORMAL,
		PRINT_REVERSE,
		PRINT_UPPER,
		PRINT_42
} action_t;

void print_normal(char *str);
void print_reverse(char *str);
void print_upper(char *str);
void print_42(char *str);
void do_action(action_t action , char *str);

#endif /* FUNC_PTR_H  */
