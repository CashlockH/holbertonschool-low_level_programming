#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of two diagonals seperatly
 * @a: the matrix
 * @size: the size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int j = 0;
int c = 0;
while (i < size)
{
j = j + *(a + (size - 1 + (size - 1) * i));
c = c + *(a + i * (size + 1));
i++;
}
printf("%d, %d\n", c, j);
}
