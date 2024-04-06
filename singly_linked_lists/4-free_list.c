#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the members of the list
 * @head: pointer to the first member of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		printf("%s", "Freed !");
		exit(0);
	}
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
