#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints 0-9 in string type
 * Return: 0
 */
int main(void)
{
int n = 48;
for (; n <= 102 ; n++)
{
if (n == 58)
n = n + 39;
putchar(n);
}
putchar('\n');
return (0);
}
