#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints 0-9 in string type with , and spaces
 * Return: 0
 */
int main(void)
{
int n = 48;
for (; n <= 57 ; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
