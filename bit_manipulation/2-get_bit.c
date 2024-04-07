#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * get_bit - gets the bit at the given index
 * @n: the given decimal number
 * @index: the specified index of the number
 * Return: the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int d = 1 << index;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	d = d & n;
	if (d)
		d = d >> index;
	return (d);
}
