#include "main.h"
/**
 * _calloc - allocates memory for array and sets to 0
 * @nmemb: the numbers of the elements
 * @size: the size of the type of one element
 * Return: the allocated pointer
 * On error, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i != nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
