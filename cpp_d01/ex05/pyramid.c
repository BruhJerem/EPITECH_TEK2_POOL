/*
** EPITECH PROJECT, 2018
** 91lesPyramides
** File description:
** pyramiiides
*/

#include <stdio.h>
#include <stdlib.h>

int pyramid_path(int size , int **map)
{
	int coord=0;
	int total=0;
	
	for (int i=1; i<size; i++) {
		if (map[i][prev+1] < map[i][prev])
			prev = map[i][prev+1];
		total+=prev;
	}
	return (total);
}
