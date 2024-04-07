#include <stdio.h>
#include "main.h"
void print_binary(int num)
{
	int d = 1 << 10;

	if (num == 0)
	{
		printf("0");
		return;
	}
	while (d > 0)
	{
		if (num & d)
			printf("1");
		else
			printf("0");
		d >>= 1;
	}
}
