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
	
}String;

void StringInit(String *this, const char *s);
void StringDestroy(String *this);

#endif /* STRING_H_  */
