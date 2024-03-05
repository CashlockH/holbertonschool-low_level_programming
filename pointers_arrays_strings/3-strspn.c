#include "main.h"
/**
 * _strspn - finds the number of specific string in the first segment of s
 * @s: string which will be checked
 * @accept: the string that will be used during checking
 *
 * Return: On success the number of element
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int n = 0;
while (accept[i] != '\0')
{
j = 0;
for (; s[j] != ' '; j++)
{
if (accept[i] == s[j])
n = n + 1;
}
i++;
}
return (n);
}
