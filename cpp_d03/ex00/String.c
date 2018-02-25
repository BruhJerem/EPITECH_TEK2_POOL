/*
** EPITECH PROJECT, 2018
** string
** File description:
** string
*/

#include "String.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void StringInit(String *this, const char *s)
{
	this->str = strdup(s);
}

void StringDestroy(String *this)
{
	free(this->str);
}
