#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at specified index
 * @head: pointer to the first node of the list
 * @index: the index which is the position of desired node
 * Return: desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	if (head->next == NULL)
	{
		printf("(nil)\n");
		exit(100);
	}
	if (i < index)
	{
		tmp = get_dnodeint_at_index(head->next, index - 1);
	}
	else
		return (tmp);
	return (tmp);
}
