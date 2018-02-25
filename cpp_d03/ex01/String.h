/*
** EPITECH PROJECT, 2018
** String
** File description:
** String
*/

#ifndef STRING_H_
# define STRING_H_

typedef struct String {

	char *str;
	void (*assign_s)(struct String *this, const struct String *str);
	void (*assign_c)(struct String *this, const char *s);
	
}String;

void StringInit(String *this, const char *s);
void StringDestroy(String *this);
void assign_s(String *this, const String *str);
void assign_c(String *this, const char *s);

#endif /* STRING_H_  */
