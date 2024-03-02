#include <stdio.h>
#include "main.h"
/**
 * print_array - writes the character c to stdout
 * @a: The character to print
 * @n: The number of terms we want to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
if (i < n - 1)
printf("%d, ", a[i]);
else
printf("%d\n", a[i]);
}
if (n <= 0)
printf("\n");
}
