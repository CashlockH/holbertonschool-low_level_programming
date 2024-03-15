#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees the allocated memory
 *@grid: the array for which allocated memory should be freed
 *@height: the numbers of the rows of the array
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
