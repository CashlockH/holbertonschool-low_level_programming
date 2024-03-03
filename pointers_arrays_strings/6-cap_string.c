#include "main.h"
/**
 * cap_string - writes the character c to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *a)
{
int  i = 0;
if (a[i] >= 97 && a[i] <= 122)
a[i] = a[i] - 32;
while (a[i] != '\0')
{
if (a[i] < 48 && a[i] != 45)
if (a[i + 1] >= 97 && a[i + 1] <= 122)
{
a[i + 1] = a[i + 1] - 32;
}
i++;
}
return (a);
}
