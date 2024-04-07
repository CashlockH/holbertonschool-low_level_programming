#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at the specified index
 * @head: pointer to the first node
 * @index: the index of the node will be deleted
 * Return: 1
 * On error: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;
	dlistint_t *next_node;

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
	next_node = tmp->next->next;
	free(tmp->next);
	tmp->next = next_node;
	if (next_node != NULL)
		next_node->prev = tmp;
	return (1);
}
