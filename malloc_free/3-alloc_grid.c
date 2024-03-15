#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for two dimensional array with malloc
 * @width: the number of rows
 * @height: the number of columns
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **block;
	int i = 0;
	int j = 0;

	block = (int **) malloc(sizeof(int *) * width);
	if (block == NULL)
		return (NULL);
	for (; i < width; i++)
	{
		block[i] = (int *) malloc(sizeof(int) * height);
		if (block == NULL)
			return (NULL);
	}
	i = 0;
	for (; i < width ; i++)
	{
		j = 0;
		for (; j < height ; j++)
		{
			block[i][j] = 0;
		}
	}
	return (0);
}
