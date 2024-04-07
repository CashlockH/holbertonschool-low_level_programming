#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at specified index
 * @idx: index of the new node
 * @n: the data of the new node
 * @h: pointer to the first node
 * Return: the address of the new node
 * On error NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	if (new == NULL)
		return (NULL);
	while (tmp)
	{
		if (i == idx)
			break;
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (NULL);
	new->n = n;
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;
	return (new);
}
