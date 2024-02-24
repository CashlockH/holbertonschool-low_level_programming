#include "main.h"
/**
 *print_last_digit - as its name
 *@num:number parameter
 *Return: the last digit.
 */
int print_last_digit(int num)
{
int nese = num % 10;
_putchar(nese + '0');
return (num % 10);
}
