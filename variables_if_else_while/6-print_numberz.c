#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints 0-9 in string type
 * Return: 0
 */
int main(void)
{
int i = 0;
for (; i <= 9 ; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
