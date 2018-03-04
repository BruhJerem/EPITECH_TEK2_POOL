/*
** EPITECH PROJECT, 2018
** ex_04
** File description:
** ex_04 - Char
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "new.h"
#include "char.h"
#include "object.h"
#include "raise.h"

typedef struct
{
    Class base;
    char c;
} CharClass;

static void Char_ctor(Object *self, va_list *list)
{
	((CharClass *) self)->c = (char) va_arg(*list, int);
}

static void Char_dtor(Object* self)
{
	if (!self)
		raise("Object must be initialised");

	free(((Class*) self)->__str__);
}

static const char *Char_to_string(Object *self)
{
	char *str = NULL;

	asprintf(&str, "<Char (%c)>", ((CharClass *) self)->c);

	return (const char *) str;
}

static Object *Char_add(const Object *self, const Object *other)
{
	Object *add;

	add = new(Char, ((CharClass *) self)->c);

	((CharClass *) add)->c += ((CharClass *) other)->c;

	return add;
}

static Object *Char_sub(const Object *self, const Object *other)
{
	Object *sub;

	sub = new(Char, ((CharClass *) self)->c);

	((CharClass *) sub)->c -= ((CharClass *) other)->c;

	return sub;
}

static Object *Char_mul(const Object *self, const Object *other)
{
	Object *sub;

	sub = new(Char, ((CharClass *) self)->c);

	((CharClass *) sub)->c *= ((CharClass *) other)->c;

	return sub;
}

static Object *Char_div(const Object *self, const Object *other)
{
	Object *sub;

	if (((CharClass *) other)->c == 0)
		raise("You cannot divide by zero !");

	sub = new(Char, ((CharClass *) self)->c);

	((CharClass *) sub)->c /= ((CharClass *) other)->c;

	return sub;
}

static bool Char_eq(const Object *self, const Object *other)
{
	return (((CharClass *) self)->c == ((CharClass *) other)->c);
}

static bool Char_gt(const Object *self, const Object *other)
{
	return (((CharClass *) self)->c > ((CharClass *) other)->c);
}

static bool Char_lt(const Object *self, const Object *other)
{
	return (((CharClass *) self)->c < ((CharClass *) other)->c);
}

static CharClass _description = {
	{ sizeof(CharClass), "Char", &Char_ctor, &Char_dtor, &Char_to_string, &Char_add, &Char_sub, &Char_mul, &Char_div, &Char_eq, &Char_gt, &Char_lt},
	0
};

Class* Char = (Class*) &_description;
