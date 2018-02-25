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

void StringDestroy(String *this)
{
	if (!this->str)
		free(this->str);
}

void StringInit(String *this, const char *s)
{
	StringDestroy(this);
	if (s!=NULL)
		this->str = strdup(s);
	this->assign_c = &assign_c;
	this->assign_s = &assign_s;
}

void assign_s(String *this, const String *str)
{
	StringDestroy(this);
	if (str->str!=NULL)
		this->str = strdup(str->str);
}

void assign_c(String *this, const char *s)
{
	StringDestroy(this);
	if (s!=NULL)
		this->str = strdup(s);
}
