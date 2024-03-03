#include "main.h"
/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: fsdfs
 * @n: fasdfs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
if (src[j] == '\0')
{
while (j < i)
{
dest[j] = '\0';
j++;
}
}
return (dest);
}
