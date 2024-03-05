#include "main.h"
/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: asdf
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
int n = 0;
while (accept[i] != '\0')
{
j = 0;
for (; s[j] != '\0' ; j++)
{
if (accept[i] == s[j])
{
if (j <= n || n == 0)
n = j;
}
}
i++;
}
return (s + n);
}
