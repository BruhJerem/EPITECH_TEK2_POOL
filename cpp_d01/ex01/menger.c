/*
** EPITECH PROJECT, 2018
** menger
** File description:
** menger
*/

#include <stdio.h>

void menger(int size, int level, int x, int y)
{
	int next_size = size/3;
	if (size == 0 || level % 3 != 0 || level != 0){

		printf("%03d %03d %03d\n", next_size, x+next_size, y+next_size);
		menger(next_size, level - 1, x, y);
		menger(next_size, level - 1, x, y + next_size);
		menger(next_size, level - 1, x, y+2*next_size);
		menger(next_size, level - 1, x + next_size,y);
		menger(next_size, level - 1, x + next_size, y+2*next_size);
		menger(next_size, level - 1, x+2*next_size, y);
		menger(next_size, level - 1, x+2*next_size, y+next_size);
		menger(next_size, level - 1, x+2*next_size, y+2*next_size);
	}
}
