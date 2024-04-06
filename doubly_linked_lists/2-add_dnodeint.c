#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node to the top of the list
 * @head: pointer to the first member of the list
 * @n: the data of the new node
 * Return: the address of the new node
 * On error, 0;
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (0);
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
