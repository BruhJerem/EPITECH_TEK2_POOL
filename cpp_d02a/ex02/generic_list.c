/*
** EPITECH PROJECT, 2018
** simple list
** File description:
** simple list
*/

#include <stdio.h>
#include <stdlib.h>
#include "generic_list.h"

/* Information */

unsigned int    list_get_size(list_t list)
{
	int i;
	
	for (i=0; list != NULL; i++)
		list = list->next;
	return (i);
	
}

bool_t list_is_empty(list_t list)
{
	if (list == NULL)
		return (TRUE);
	return (FALSE);
}

void list_dump(list_t list, value_displayer_t val_disp)
{
	while (list != NULL) {
		val_disp(list->value);
		list=list->next;
	}
}

/* Modification */

static node_t *list_create_node(void *elem)
{
	node_t *node = malloc(sizeof(node_t));
	
	node->value = elem;
	node->next = NULL;
	return (node);
}

bool_t  list_add_elem_at_front(list_t *front_ptr, void *elem)
{
	node_t *new_element = list_create_node(elem);
	
	if (new_element == NULL)
		return (FALSE);
	new_element->next = *front_ptr;
	*front_ptr = new_element;
 	return (TRUE);
}

bool_t  list_add_elem_at_back(list_t *front_ptr, void *elem)
{
	node_t *new_element = list_create_node(elem);
	list_t list = *front_ptr;

	if (new_element == NULL) {
		return (FALSE);
	}
	if (list == NULL) {
		*front_ptr = new_element;
	} else {
		list = *front_ptr;
		while (list->next != NULL) {
			list = list->next;
		}
		list->next = new_element;
	}
	return (TRUE);
}

static bool_t check_position(list_t list, unsigned int pos)
{
	while (pos--) {
		list = list->next;
		if (list == NULL) {
			return (FALSE);
		}
	}
	return (TRUE);
}

bool_t  list_add_elem_at_position(list_t *front_ptr, void *elem, unsigned int position)
{
	list_t list = *front_ptr;
	node_t *node = list_create_node(elem);
	
	if (*front_ptr == NULL || node == NULL)
		return (FALSE);
	if (position == 0)
		return (list_add_elem_at_front(front_ptr, elem));
	if (check_position(list, position) == FALSE)
		return (FALSE);
	node->next = list->next;
	list->next = node;
	return (TRUE);
}

bool_t  list_del_elem_at_front(list_t *front_ptr)
{
	list_t list = *front_ptr;

	if (list == NULL) {
		return (FALSE);
	}
	*front_ptr = list->next;
	free(list);
	return (TRUE);
}

bool_t  list_del_elem_at_back(list_t *front_ptr)
{
	list_t list = *front_ptr;
	list_t prev = NULL;
	
	if (list == NULL)
                return (FALSE);
        while (list->next != NULL) {
		prev = list;
		list = list->next;
	}
	if (prev != NULL) {
		prev->next = NULL;
	} else {
		*front_ptr = NULL;
	}
	free(list);
        return (TRUE);

}

bool_t  list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
 	list_t list = *front_ptr;
        list_t prev = prev;

	if (*front_ptr == NULL)
	        return (FALSE);
	if (position == 0)
	        return (list_del_elem_at_front(front_ptr));
	if (check_position(list, position) == FALSE)
                return (FALSE);
	if (list == NULL)
		prev->next = list->next;
        free(list);
        return (TRUE);
}

void list_clear(list_t *front)
{
	list_t list=*front;

	if (!front)
		return;
	list_clear(&(list->next));
	free(list);
}

/* Value Access */

void *list_get_elem_at_front(list_t list)
{
	if (list==NULL)
		return (0);
	return (list->value);
}

void *list_get_elem_at_back(list_t list)
{
	if (list==NULL)
		return (0);
	while (list->next) {
		list = list->next;
	}
	return (list->value);
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
	if (list==NULL || check_position(list, position) == FALSE)
		return (0);
	if (position == 0)
		return (list_get_elem_at_front(list));
	return (list->value);
}

/* Node Access */

node_t *list_get_first_node_with_value(list_t  list , void *value ,
				       value_comparator_t  val_comp)
{
        while (list) {
		if (val_comp(value, list->value) == 0)
                        return (list);
                list = list->next;
        }
	return (NULL);
}
