#include "main.h"
/**
 * more_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
char a[] = "01";
while (j != 10)
{
i = 0;
a[0] = '0';
while (i != 15)
{
if (i == 10)
a[0] = '0';
if (i > 9)
{
_putchar(a[1]);
}
_putchar(a[0]);
a[0] = a[0] + 1;
i++;
}
_putchar('\n');
j++;
}
}
