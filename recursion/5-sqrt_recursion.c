#include "main.h"
/**
 * _sqrt_recursion - call sqrt_recursion to initiate the recursion
 * @n: the integer of which the square root's to be calculated
 * Return: the square root of the integer
 * On error, -1
 */
int _sqrt_recursion(int n)
{
	int sqrt_recursion(int b, int a);

	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 1));
}
/**
 * sqrt_recursion - calculate the sqrt recursively
 * @b: the same as in the n
 * @a: the sqrt of the b that must be checked
 * Return: sqrt of the b
 */
int sqrt_recursion(int b, int a)
{
	if (a * a == b)
		return (a);
	else if (a == b / 2 + 1)
		return (1);
	return (sqrt_recursion(b, a + 1));
}

