#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add a new node to the top of the list
 * @head: first element of the list
 * @str: string element of the list member
 * Return: the address of the new member
 * On error, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str  = strdup(str);
	first->len = strlen(str);
	first->next = *head;
	*head = first;
	return (first);
}
