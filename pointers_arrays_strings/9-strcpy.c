#include "main.h"
/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The string that will be copied
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
