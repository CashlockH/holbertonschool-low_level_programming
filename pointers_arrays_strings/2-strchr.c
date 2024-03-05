#include "main.h"
#include <stddef.h>
/**
 * _strchr - makes the string starts from the first occurance of character c
 * @c: The character that is given as an input
 * @s: string that is given as an input
 * Return: If s string has c return new string, else NULL .
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
int i = 0;
char *b;
while (s[i] != '\0')
{
if (s[i] == c)
{
b = (s + i);
return (b);
}
i++;
}
if (c == '\0')
{
b = (s + i);
return (b);
}
else
return (NULL);
}
