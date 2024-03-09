#include "main.h"
/**
 * is_prime_number - call prime_rec to initiate the recursion
 * @n: the input integer we should check
 * Return: If prime 1, else 0
 */
int is_prime_number(int n)
{
	int prime_rec(int b, int a);

	if (n <= 1)
		return (0);
	return (prime_rec(n, 2));
}
/**
 * prime_rec - checks if the integer is prime or not
 * @b: the same as n
 * @a: plays the divisor role for n
 * Return: If prime 1, else 0
 */
int prime_rec(int b, int a)
{
	if (b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	return (prime_rec(b, a + 1));
}
