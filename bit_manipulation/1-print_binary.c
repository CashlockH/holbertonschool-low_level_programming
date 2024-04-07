#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_binary - prints decimal in binary
 * @num: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int num)
{
	unsigned long int d;
	int i = 0;

	d = 1UL << (sizeof(unsigned long int) * CHAR_BIT - 1);
	if (num == 0)
	{
		printf("0");
		return;
	}
	while (d > 0)
	{
		if (num & d)
		{
			printf("1");
			i = 1;
		}
		else if (i == 1)
			printf("0");
		d >>= 1;
	}
}
