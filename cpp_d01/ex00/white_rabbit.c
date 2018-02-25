/*
** EPITECH PROJECT, 2018
** white_rabit
** File description:
** rabbit
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int follow_the_white_rabbit(void)
{
	int	total=0;
	
	for(;;){
		int rand=random()%37+1;
		total+=rand;
		if ((rand == 13 || rand >=34) && rand != 37)
			printf("right\n");
		else if ((rand >= 4 && rand <= 6) || (rand >= 17 && rand <= 21) || rand == 28)
			printf("left\n");
		if (rand == 15 || rand == 23 || rand == 10)
			printf("forward\n");
		else if (rand%8 == 0 || rand == 24 || rand == 25 || rand == 32)
			printf("backward\n");
		if (total == 421 || rand == 37 || rand == 1)
			break;
	}
	printf("RABBIT!!!\n");
	return (total);
}
