#include "main.h"
/**
 *print_number - writes the character c to stdout
 *@n: The character to print
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
if (n >= 10)
{
print_number(n / 10);
n %= 10;
}
_putchar(n + '0');
return (0);
}
/**
 *times_table - writes the character c to stdout
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int row, column, product;
for (row = 0 ; row <= 9 ; row++)
{
for (column = 0 ; column <= 9 ; column++)
{
product = row * column;
if (column == 0)
{
_putchar('0');
}
else
{
_putchar(',');
}
_putchar(' ');
if (product < 10)
{
_putchar(' ');
}
print_number(product);
}
_putchar('$');
_putchar('\n');
}
}
