/*
** EPITECH PROJECT, 2018
** vertex
** File description:
** vertex
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdarg.h>
#include "vertex.h"
#include "object.h"
#include "raise.h"

typedef struct
{
	Class base;
	int x, y, z;
} VertexClass;

static void Vertex_ctor(Object *self, va_list *list)
{
	((VertexClass *)self)->x = va_arg(*list, int);
	((VertexClass *)self)->y = va_arg(*list, int);
	((VertexClass *)self)->z = va_arg(*list, int);
}

static void Vertex_dtor(Object* self)
{
	if (!self)
		raise("Object must be initialised");
}

static const char *Vertex_getStr(Object *self)
{
	char *str = NULL;
	
	if (!self)
		raise("Object must be initialised");
	asprintf(&str, "<Vertex (%d, %d, %d)>", ((VertexClass *)self)->x,
		 ((VertexClass *)self)->y, ((VertexClass *)self)->z);
	 return (char const *)str;
}

static VertexClass _description = {
	{ sizeof(VertexClass), "Vertex", &Vertex_ctor, &Vertex_dtor, &Vertex_getStr },
	0, 0, 0
};

Class* Vertex = (Class*) &_description;
