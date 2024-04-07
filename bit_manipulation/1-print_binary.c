#include <stdio.h>
#include "main.h"
#include <limits.h>
void print_binary(unsigned long int num)
{
	int d = 1 << sizeof(unsigned long int) * 5;
	int i = 0;

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
