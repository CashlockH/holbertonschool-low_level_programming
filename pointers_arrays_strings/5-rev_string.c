#include "main.h"
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char d[10];
while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
d[j] = s[i];
j++;
i--;
}
i = 0;
while (d[i] != '\0')
{
s[i] = d[i];
i++;
}
}
