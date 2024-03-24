#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - calculates sum of all the arguments
 * @n: the number of arguments
 * Return: the sum of the argument except the first one
 * On error, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nese;
	unsigned int i;
	unsigned int j = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(nese, n);
	for (i = n ; j <= n ; i = va_arg(nese, int))
	{
		sum = sum + i;
		j++;
	}
	va_end(nese);
	sum = sum - n;
	return (sum);
}
