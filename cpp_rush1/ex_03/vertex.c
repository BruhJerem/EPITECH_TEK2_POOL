/*
** EPITECH PROJECT, 2018
** vertex
** File description:
** vertex
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdarg.h>
#include "new.h"
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

static Object *Vertex_add(const Object *self, const Object *other)
{
        Object *newObject= new(Vertex);

        ((VertexClass*)newObject)->x = ((VertexClass*)self)->x + ((VertexClass*)other)->x;
        ((VertexClass*)newObject)->y = ((VertexClass*)self)->y + ((VertexClass*)other)->y;
	((VertexClass*)newObject)->z = ((VertexClass*)self)->z + ((VertexClass*)other)->z;
        return (newObject);
}

static Object *Vertex_sub(const Object *self, const Object *other)
{
	Object *newObject= new(Vertex);
	
	((VertexClass*)newObject)->x = ((VertexClass*)self)->x - ((VertexClass*)other)->x;
        ((VertexClass*)newObject)->y = ((VertexClass*)self)->y - ((VertexClass*)other)->y;
	((VertexClass*)newObject)->z = ((VertexClass*)self)->z - ((VertexClass*)other)->z;
	return (newObject);
}

static VertexClass _description = {
	{ sizeof(VertexClass), "Vertex", &Vertex_ctor, &Vertex_dtor, &Vertex_getStr, &Vertex_add, &Vertex_sub},
	0, 0, 0
};

Class* Vertex = (Class*) &_description;
