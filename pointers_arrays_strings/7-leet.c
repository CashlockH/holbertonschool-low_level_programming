#include "main.h"
/**
 * leet - writes the character c to stdout
 * @a: The ch
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *a)
{
char *b = "aeotl";
char *d = "AEOTL";
char *c = "43071";
int i = 0;
int j = 0;
while (a[i] != '\0')
{
j = 0;
for (; j <= 4 ; j++)
{
if (a[i] == b[j] || a[i] == d[j])
a[i] = c[j];
}
i++;
}
return (a);
}
