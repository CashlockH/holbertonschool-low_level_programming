#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds b as a pattern in b
 * @a: The string as a source
 * @b: The string that find as a pattern in a
 * Return: On success b.
 * If there is no b in a returns NULL
 */
char *_strstr(char *a, char *b)
{
int i = 0;
int j = 0;
int c = 0;
if (b == "")
return a;
while (b[i] != '\0')
{
if (c != 0)
j = j + 1;
else
j = 0;
for (; a[j] != '\0' ; j++)
{
if (a[j] == b[i])
{
c = c + 1;
break;
}
else
{
c = 0;
i = 0;
}
}
if (a[j] == '\0')
break;
i++;
}
if (i == c && c != 0)
return (a + j - c + 1);
else
return (NULL);
}
