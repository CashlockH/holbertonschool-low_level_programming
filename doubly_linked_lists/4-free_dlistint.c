#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_dlistint - frees the nodes of the list
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		printf("Freed !\n");
		exit(0);
	}
	if (head->next != NULL)
		free_dlistint(head->next);
	free(head);
}
