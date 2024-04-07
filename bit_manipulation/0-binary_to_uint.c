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
	unsigned int digit = 0, i = 0, remain = 0, n;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		i++;
	}
	n = atoi(b);
	i = 0;
	while (n!=0)
	{
		digit=n%10;
		remain+=digit<<i;
		n=n/10;
		i++;
	}
	return (remain);
}
