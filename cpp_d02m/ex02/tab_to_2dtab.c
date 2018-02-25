/*
** EPITECH PROJECT, 2018
** ex2
** File description:
** 2
*/

#include <stdlib.h>

void tab_to_2dtab(int *tab , int length , int width , int ***res)
{
	int count_tab=0;
	
	*res=malloc(sizeof(int*) * length);
	if (*res==NULL) {
		return;
	}
	for(int i=0;i<length;i++) {
		(*res)[i] = malloc(sizeof(int) * width);
		if ((*res)[i] == NULL)
			return ;
		for (int j=0; j<width;j++) {
			(*res)[i][j] = tab[count_tab];
			count_tab++;
		}
	}
}
