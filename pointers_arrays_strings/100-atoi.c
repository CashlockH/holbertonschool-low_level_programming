#include "main.h"
/**
 * _atoi - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
int a = 0;
int i = 0;
int j = 0;
while (s[i] != '\0')
{
if (s[i] == 45)
j++;
if (s[i] >= 48 && s[i] <= 57)
{
a = a * 10 + s[i] - 48;
if (s[i + 1] > 57 || s[i + 1] < 48)
{
if (j % 2 != 0 && j != 0)
a = -a;
return (a);
}
}
i++;
}
return (a);
}
