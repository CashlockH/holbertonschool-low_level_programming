#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	while (tmp)
	{
		if (i == index)
			break;
		tmp = (tmp)->next;
		i++;
	}
	if(!i)
	{
		if ((*head)->next)
			*head = tmp->next;
		else
		{
			free(*head);
			return(1);
		}
		(*head)->prev = NULL;
		free(tmp);
		return(1);
	}
	else if(i != index)
		return (-1);
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
