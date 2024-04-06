#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - counts the members of the doubly linked list
 * @h: pointer to the first member of the double linked
 * Return: the numbers of the members
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
	{
		count++;
		return (count);
	}
	count += print_dlistint(h->next);
	count++;
	return (count);
}
