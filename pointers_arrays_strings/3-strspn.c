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
while (accept[i] != '\0')
{
for (; s[j] != ' '; j++)
{
if (s[i] == accept[j])
j++;
}
i++;
}
return (j - 1);
}
