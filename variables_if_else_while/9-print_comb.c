#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints 0-9 in string type with , and spaces
 * Return: 0
 */
int main(void)
{
for (int n = 48 ; n <= 57 ; n++)
{
putchar(n);
if (n != 57)
{
putchar('\,');
putchar(' ');
}
}
}
