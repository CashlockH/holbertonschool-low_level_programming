#include "main.h"
/**
 *print_last_digit - as its name
 *@num:number parameter
 *Return: the last digit.
 */
int print_last_digit(int num)
{
if (num >= 0)
{
_putchar((num % 10) + '0');
return (num % 10);
}
else
{
_putchar((-(num % 10)) + '0');
return (-(num % 10));
}
}
print_last_digit(-1024);
}
