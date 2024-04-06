#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print the elemnts of the members of the doubly linked list
 * @h: pointer to the first member of the double linked
 * Return: the numbers of the members
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		count++;
		return (count);
	}
		count += print_dlistint(h->next);
		printf("%d\n", h->n);
		count++;
	return (count);
}
