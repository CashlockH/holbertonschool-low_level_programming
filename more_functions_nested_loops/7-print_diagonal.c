#include "main.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n: The number of characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int i = 0;
int j = 0;
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
