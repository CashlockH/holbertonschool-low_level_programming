#include "main.h"
/**
 * _memset - it changes the first n element of string s with char b.
 * @s: The input string has to be changed
 * @b: The character that will be added to string
 * @n: The number of elements that will be changed
 * Return: On success changed s string.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
