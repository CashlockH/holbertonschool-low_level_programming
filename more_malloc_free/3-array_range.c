#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - allocates memory for array and sets to range from min to max
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: the allocated pointer
 * On error, NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int a;
	int i = 0;

	if (min <=  max)
	{
		a = max - min + 1;
		p = malloc(sizeof(int) * a);
		if (p == NULL)
			return (NULL);
		while (i <= a)
		{
			p[i] = min + i;
			i++;
		}
	}
	else
		return (NULL);
	return (p);
}
