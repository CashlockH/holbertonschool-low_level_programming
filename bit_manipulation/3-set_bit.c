#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * set_bit - sets a bit at index
 * @n: the decimal
 * @index: the given index
 * Return: 1
 * On error, 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long unsigned int d = 1 << index;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	*n = *n | d;
	return (1);
}
