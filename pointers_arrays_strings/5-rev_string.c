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
int c;
char t;
while (s[i] != '\0')
{
i++;
}
c = i / 2;
i--;
while (i != c)
{
t = s[j];
s[j] = s[i];
s[i] = t;
i--;
j++;
}
}
