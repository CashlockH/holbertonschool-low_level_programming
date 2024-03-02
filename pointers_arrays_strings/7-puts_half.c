#include "main.h"
/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;
while (str[i] != '\0')
i++;
if (i % 2 != 0)
i++;
for (j = i / 2 ; str[j] != '\0' ; j++)
{
_putchar(str[j]);
}
}
