/*
** EPITECH PROJECT, 2018
** vertex
** File description:
** vertex
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "new.h"
#include "float.h"
#include "object.h"
#include "raise.h"

typedef struct
{
	Class base;
	float x;
} FloatClass;

static void Float_ctor(Object *self, va_list *list)
{
	double res = va_arg(*list, double);
	((FloatClass *)self)->x = (float)res;
}

static void Float_dtor(Object* self)
{
	if (!self)
		raise("Object must be initialised");
}

static const char *Float_getStr(Object *self)
{
	char *str = NULL;
	
	if (!self)
		raise("Object must be initialised");
	asprintf(&str, "<Float (%f)>", ((FloatClass *)self)->x);
	return (char const *)str;
}

static Object *Float_add(const Object *self, const Object *other)
{
        Object *newObject= new(Float);

        ((FloatClass*)newObject)->x = ((FloatClass*)self)->x + ((FloatClass*)other)->x;
        return (newObject);
}

static Object *Float_sub(const Object *self, const Object *other)
{
	Object *newObject= new(Float);
	
	((FloatClass*)newObject)->x = ((FloatClass*)self)->x - ((FloatClass*)other)->x;
	return (newObject);
}

static Object *Float_mul(const Object *self, const Object *other)
{
	Object *newObject= new(Float);
		
	((FloatClass*)newObject)->x = ((FloatClass*)self)->x * ((FloatClass*)other)->x;
	return (newObject);
}

static Object *Float_div(const Object *self, const Object *other)
{
	Object *newObject= new(Float);

	if (((FloatClass*)other)->x == 0)
		raise("You can not divide by 0.");
	((FloatClass*)newObject)->x = ((FloatClass*)self)->x / ((FloatClass*)other)->x;
	return (newObject);
}

static bool Float_eq(const Object *self, const Object *other)
{
	if (((FloatClass*)self)->x == ((FloatClass*)other)->x)
		return (true);
	return (false);
}

static bool Float_gt(const Object *self, const Object *other)
{
	if (((FloatClass*)self)->x > ((FloatClass*)other)->x)
		return (true);
	return (false);
}

static bool Float_lt(const Object *self, const Object *other)
{
	if (((FloatClass*)self)->x < ((FloatClass*)other)->x)
		return (true);
	return (false);
}

static FloatClass _description = {
	{ sizeof(FloatClass), "Float", &Float_ctor, &Float_dtor, &Float_getStr, &Float_add, &Float_sub, &Float_mul, &Float_div, &Float_eq, &Float_gt, &Float_lt },
	0
};

Class* Float = (Class*) &_description;
