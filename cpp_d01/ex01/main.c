/*
** EPITECH PROJECT, 2018
** main_ex1
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "menger.h"

int my_getnbr(char *str)
{
	int	i = 0;
	int	nb = 0;
	int	check = 1;

	if (strlen(str) > 11 || (strlen(str) == 1 && str[0] == '0'))
		return (0);
	if (str[i] == '-'){
		check = -check;
		i = 1;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9')){
		nb = (10 * nb) + (str[i] - '0');
		++i;
	}
	if (check < 0)
		return (-nb);
	return (nb);
}

int main(int ac, char **ar)
{
	int size;
	int level;

	if (ac < 3)
		return (84);
	size = my_getnbr(ar[1]);
	level = my_getnbr(ar[2]);
	if (level > 3 || size % 3 != 0)
		return (84);
	menger(size, level, 0, 0);
}
