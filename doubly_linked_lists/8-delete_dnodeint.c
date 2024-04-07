#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	if (!tmp || !tmp->next)
		return (-1);
	dlistint_t *next_node = tmp->next->next;

	free(tmp->next);
	tmp->next = next_node;
	if (!next_node)
		next_node->prev = tmp;
	return (1);
}
