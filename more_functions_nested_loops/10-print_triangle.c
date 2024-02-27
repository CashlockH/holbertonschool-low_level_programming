#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: The character to print
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
int i = 1;
int j = 1;
if (size > 0)
{
while (i != size + 1)
{
j = 0;
for (; j <= size - i - 1; j++)
_putchar(' ');
for (; j <= size - 1; j++)
_putchar(35);
_putchar('\n');
i++;
}
}
else
_putchar('\n');
}
