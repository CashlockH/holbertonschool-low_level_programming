#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints until 98
 *@n: The number
 *Return: On success 0
 */
void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
printf("%d, ", n);
}
else if (n > 98)
{
for (; n > 98 ; n--)
printf("%d, ", n);
}
printf("%d\n", 98);
}
return (0);
