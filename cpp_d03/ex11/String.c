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
	this->clear = &clear;
	this->size = &size;
	this->compare_s = &compare_s;
	this->compare_c = &compare_c;
	this->copy = &copy;
	this->c_str = &c_str;
	this->empty = &empty;
	this->find_s = &find_s;
	this->find_c = &find_c;
	this->insert_c = &insert_c;
	this->insert_s = &insert_s;
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

int size(String *this)
{
	if (this->str)
		return (strlen(this->str));
	return (-1);
}

int compare_s(String *this, const String *str)
{
	return (strcmp(this->str, str->str));
}

int compare_c(String *this, const char *str)
{
	return (strcmp(this->str, str));
}

size_t copy(String *this, char *s, size_t n, size_t pos)
{
	if (pos > strlen(this->str))
		return (0);
	strncpy(s, this->str + pos, n);
	return (n);
}

const char *c_str(String *this)
{
	return (this->str);
}

int empty(String *this)
{
	if (this->str == NULL || this->str[0] == '\0')
		return (1);
	return (-1);
}

int find_s(String *this, const String *str, size_t pos)
{
	char *s = strstr(this->str, str->str + pos);

	return (s - this->str);
}

int find_c(String *this, const char *str, size_t pos)
{
	char *s = strstr(this->str, str + pos);

	return (s - this->str);
}

void insert_c(String *this, size_t pos, const char *str)
{
        char *s= malloc(sizeof(char)*(strlen(this->str) + strlen(str)));

        if (pos > strlen(this->str)) {
		this->clear(this);
                this->assign_c(this, str);
        } else {
                strncpy(s,this->str,pos);
                s[pos] = '\0';
		strcat(s,str);
                strcat(s,this->str+pos);
                this->assign_c(this, s);
        }
}

void insert_s(String *this, size_t pos, const String *str)
{
        char *s= malloc(sizeof(char)*(strlen(this->str) + strlen(str->str)));

        if (pos > strlen(this->str)) {
                this->clear(this);
                this->assign_c(this, str->str);
        } else {
                strncpy(s,this->str,pos);
                s[pos-1] = '\0';
                strcat(s,str->str);
                strcat(s,this->str+pos);
                this->assign_c(this, s);
        }
}

