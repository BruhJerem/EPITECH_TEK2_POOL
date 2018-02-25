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
	this->to_int = &to_int;
	this->split_s = &split_s;
	this->split_c = &split_c;
	this->aff = &aff;
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
	
	strncpy(s,this->str,pos);
	s[pos] = '\0';
	strcat(s,str);
	strcat(s,this->str+pos);
	this->assign_c(this, s);
}

void insert_s(String *this, size_t pos, const String *str)
{
	char *s= malloc(sizeof(char)*(strlen(this->str) + strlen(str->str)));

        strncpy(s,this->str,pos);
        s[pos-1] = '\0';
        strcat(s,str->str);
        strcat(s,this->str+pos);
	this->assign_c(this, s);
}

int to_int(String *this)
{
	return (atoi(this->str));
}

static char **malloc_tab_str(char **tab, char *str, char cut)
{
	int	k = -1;
	int	o = 0;
	int	i = -1;

	while (str[++k]) {
		o += (str[k] != cut ? 1 : 0);
		if (str[k] == cut || str[k + 1] == '\0') {
			if ((tab[++i] = malloc(o + 1)) == NULL)
				return (NULL);
			tab[i][o] = '\0';
			o = 0;
		}
	}
	return (tab);
}

static char **malloc_tab(char *str, char cut)
{
  char **tab;
  int i = -1;
  int k = 1;

  while (str[++i]) {
      if (str[i] == cut)
	k++;
    }
  if ((tab = malloc(sizeof(char *) * (k + 1))) == NULL)
    return (NULL);
  tab[k] = NULL;
  tab = malloc_tab_str(tab, str, cut);
  return (tab);
}

static char *malloc_clear(char *str, char remove_char, char cut)
{
	char *new;
	int i = -1;
	int mall = 0;

	while (str[++i]) {
		if (str[i] == remove_char ||
		    (str[i] == cut && str[i + 1] && str[i + 1] == cut) ||
		    (str[i] == cut && !str[i + 1]))
			++mall;
	}
	if ((new = malloc(strlen(str) - mall + 1)) == NULL)
		return (NULL);
	return (new);
}

static char *clear_str(char *str, char remove_char, char cut)
{
	char	*new;
	int	i = -1;
	int	k = -1;

	new = malloc_clear(str, remove_char, cut);
	while (str[++i] == remove_char || str[i] == cut);
	i--;
	while (str[++i]) {
		if (str[i] != remove_char &&
		    !(str[i] == cut && str[i + 1] && str[i + 1] == cut)
		    && !((str[i] == cut && !str[i + 1])))
			new[++k] = str[i];
	}
	new[k + 1] = '\0';
	return (new);
}

char **split_c(String *this, char separator)
{
	char **tab;
	int i = 0;
	int k = -1;
	int o = -1;

	if (this->str == NULL || this->str[0] == '\0')
		return (NULL);
	this->str = clear_str(this->str, 0, separator);
	tab = malloc_tab(this->str, separator);
	while (this->str[++k] != '\0') {
		if (this->str[k] == separator) {
			++i;
			tab[i][o] = '\0';
			o = -1;
		} else
			tab[i][++o] = this->str[k];
	}
	return (tab);
}

static int nb_of_tab(char **tab)
{
	int i;

	for (i=0;tab[i]!=NULL;i++);
	return (i);
}

String *split_s(String *this, char separator)
{
	char **tab = this->split_c(this, separator);
	String *res;
	int i;

	res = (String*)malloc(sizeof(String) * (nb_of_tab(tab)+1));
	for (i = 0; tab[i] != NULL; i++) {
		StringInit(&(res[i]), tab[i]);
	}
	StringInit(&(res[i]), NULL);
        return (res);
}

void aff(String *this)
{
	if (this->str != NULL) {
		printf("%s", this->str);
	}
}
