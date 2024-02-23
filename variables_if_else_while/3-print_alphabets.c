#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - squence of lovercase and uppercase letters
 * Return: 0
 */
int main(void)
{
char ch = 'a';
char nese = 'A';
for (; ch != 'z' + 1 ; ch++)
{
putchar(ch);
}
putchar('\n');
for (; nese != 'Z' + 1 ; nese++)
putchar(nese);
return (0);
}
