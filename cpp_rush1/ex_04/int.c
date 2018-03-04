/*
** EPITECH PROJECT, 2018
** point
** File description:
** point
*/

#define _GNU_SOURCE
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "int.h"
#include "new.h"
#include "object.h"
#include "raise.h"

typedef struct
{
    Class base;
    int x;
} IntClass;

static void Int_ctor(Object* self, va_list *list)
{
	((IntClass*)self)->x = va_arg(*list, int);
}

static void Int_dtor(Object* self)
{
	if (!self)
		raise("Object must be initialised");
}

static const char *Int_getStr(Object* self)
{
	char *str = NULL;
	if (!self)
		raise("Object must be initialised");
	asprintf(&str, "<Int (%d)>", ((IntClass *)self)->x);
	return ((char const*)str);

}

static Object *Int_add(const Object *self, const Object *other)
{
	Object *newObject= new(Int);

	((IntClass*)newObject)->x = ((IntClass*)self)->x + ((IntClass*)other)->x;
	return (newObject);
}

static Object *Int_sub(const Object *self, const Object *other)
{
	Object *newObject= new(Int);

	((IntClass*)newObject)->x = ((IntClass*)self)->x - ((IntClass*)other)->x;
	return (newObject);
}

static Object *Int_mul(const Object *self, const Object *other)
{
	Object *newObject = new(Int);
	((IntClass*)newObject)->x = ((IntClass*)self)->x * ((IntClass*)other)->x;
	return (newObject);
}

static Object *Int_div(const Object *self, const Object *other)
{
	Object *newObject = new(Int);
	if (((IntClass*)other)->x == 0)
		raise("You cannot divide by 0.");
	((IntClass*)newObject)->x = ((IntClass*)self)->x / ((IntClass*)other)->x;
	return (newObject);
}

static bool Int_eq(const Object *self, const Object *other)
{
	if (((IntClass*)self)->x == ((IntClass*)other)->x)
		return (true);
	else
		return (false);
}

static bool Int_gt(const Object *self, const Object *other)
{
	if (((IntClass*)self)->x > ((IntClass*)other)->x)
		return (true);
	else
		return (false);
}

static bool Int_lt(const Object *self, const Object *other)
{
	if (((IntClass*)self)->x < ((IntClass*)other)->x)
		return (true);
	else
		return (false);
}

static IntClass _description = {
	{ sizeof(IntClass), "Int", &Int_ctor, &Int_dtor, &Int_getStr, &Int_add, &Int_sub, &Int_mul, &Int_div, &Int_eq, &Int_gt, &Int_lt },
	0
};

Class* Int = (Class*) &_description;
