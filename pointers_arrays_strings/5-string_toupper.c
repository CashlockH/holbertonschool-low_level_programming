#include "main.h"
/**
 * string_toupper - writes the character c to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] >= 97 && a[i] <= 122)
a[i] = a[i] - 32;
i++;
}
return (a);
}
