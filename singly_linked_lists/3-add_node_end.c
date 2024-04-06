#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds new node to the end of the list
 * @head: pointer to first member of the list
 * @str: data of the new node
 * Return: the address of the new node
 * On error, NULL;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first;
	list_t *temp = *head;
	int length = 0;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str  = strdup(str);
	while (str[length])
		length++;
	first->len = length;
	first->next = NULL;
	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = first;
	return (first);
}
