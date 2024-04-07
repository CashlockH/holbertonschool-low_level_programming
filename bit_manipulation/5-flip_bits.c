#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * flip_bits - counts the lacked bits for changing n into m
 * @n: number desired to be changed
 * @m: number into which the first one change
 * Return: the number of the bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int count = 0;

	d = n ^ m;
	while (d > 0)
	{
		count += d & 1;
		d >>= 1;
	}
	return (count);
}
