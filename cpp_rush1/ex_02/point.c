/*
** EPITECH PROJECT, 2018
** point
** File description:
** point
*/

#define _GNU_SOURCE
#include <stdarg.h>
#include <stdio.h>
#include "point.h"
#include "object.h"
#include "raise.h"

typedef struct
{
	Class base;
	int x, y;
} PointClass;

static void Point_ctor(Object* self, va_list *list)
{
	((PointClass*)self)->x = va_arg(*list, int);
	((PointClass*)self)->y = va_arg(*list, int);
}

static void Point_dtor(Object* self)
{
	if (!self)
		raise("Object must be initialised");
}

static const char *Point_getStr(Object* self)
{
	char *str = NULL;
	if (!self)
		raise("Object must be initialised");
        asprintf(&str, "<Point (%d, %d)>", ((PointClass *)self)->x,
                 ((PointClass *)self)->y);
	return ((char const*)str);

}

static PointClass _description = {
	{ sizeof(PointClass), "Point", &Point_ctor, &Point_dtor, &Point_getStr },
    0, 0
};

Class* Point = (Class*) &_description;
