#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned it using bitwise ops
 * @b: binary parameter
 * Return: the int value of the binary b
 * On error 0
 */
unsigned int binary_to_uint(const char *b)
{
	int d = 0;

	while (*b)
	{
		if(*b != '0' && *b  != '1')
		return (0);
		d = (d << 1) + (*b++ - '0');
	}
	return (d);
}
