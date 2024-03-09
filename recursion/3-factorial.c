#include "main.h"
/**
 * factorial - calculate the factorial of the input recursively
 * @n: input integer of which factorial should be calculated
 * Return: the factorial of n
 * On error, return -1
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
