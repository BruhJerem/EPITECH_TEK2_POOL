/*
** EPITECH PROJECT, 2018
** new
** File description:
** new
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "new.h"
#include "point.h"
#include "raise.h"

void *new(Class *class)
{
	Class *obj;

	obj = malloc(sizeof(*class));

	if (!obj)
		raise("Constructor : Error in memory allocation");

	if (!(memcpy(obj, class, sizeof(*class))))
		raise("Constructor : Error in creation of the class");

	if (obj->__init__)
		obj->__init__(obj);

	return (obj);
}

void delete(Object *ptr)
{
	if (ptr) {
		((Class *) ptr)->__del__(ptr);
		free(ptr);
	}
}
