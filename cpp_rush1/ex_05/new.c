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
#include "raise.h"
#include "float.h"

Object *new(Class *class, ...)
{
	Class *new;
	va_list	ap;

	va_start(ap, class);
	new = va_new(class, &ap);
	va_end(ap);
	return ((Object *)new);
}

Object *va_new(Class *class, va_list *ap)
{
	Class *new;

	if ((new = malloc(class->__size__)) == NULL
	    || memcpy(new, class, class->__size__) == NULL)
		raise("Constructor : Error and memory allocation.");
	if (new->__init__)
		new->__init__(new, ap);
	return ((Object *)new);
}

void	delete(Object *ptr)
{
	if (((Class *)ptr)->__del__)
		((Class *)ptr)->__del__(ptr);
	free(ptr);
}
