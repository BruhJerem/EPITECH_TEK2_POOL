/*
** EPITECH PROJECT, 2018
** string
** File description:
** string
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "String.h"

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
	this->assign_s = &assign_s;
	this->assign_c = &assign_c;
	this->append_s = &append_s;
	this->append_c = &append_c;
	this->at = &at;
	this->clear = &clear
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

void append_s(String *this, const String *ap)
{
	char *tmp = strdup(this->str);
	char *new_str = malloc(sizeof(char) * (strlen(ap->str) + strlen(tmp) + 1));

	strcat(new_str, tmp);
	strcat(new_str, ap->str);
	StringDestroy(this);
	this->str = new_str;
}

void append_c(String *this, const char *ap)
{
        char *tmp = strdup(this->str);
        char *new_str =	malloc(sizeof(char) * (strlen(ap) + strlen(tmp) + 1));

        strcat(new_str, tmp);
        strcat(new_str, ap);
        StringDestroy(this);
        this->str = new_str;
}

char at(String *this, size_t pos)
{
	if (pos > strlen(this->str))
		return (-1);
	return (this->str[pos]);
}

void clear(String *this)
{
	free(this->str);
	this->str = strdup("\0");
}
