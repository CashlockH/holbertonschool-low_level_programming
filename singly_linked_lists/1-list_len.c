#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * list_len - finds the number of the member of list
 * @h: pointer to the first list element
 * Return: the number of the members
 * On error, 0
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	count++;
	if (h->next == NULL)
		return (count);
	count = count + print_list(h->next);
	return (count);
}
