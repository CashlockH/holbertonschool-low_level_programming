#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * clear_bit - sets the bit at the given index to 0
 * @n: the decimal number
 * @index: the given index
 * Return: 1
 * On error, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long unsigned int d = 1 << index;
	long unsigned int a;

	if (*n == 0)
		return (-1);
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	a = *n ^ d;
	if(a > *n)
		*n = a - d;
	else
		*n = a;
	return (1);
}
