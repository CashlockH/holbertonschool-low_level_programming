#include <stdio.h>
#include "main.h"
void print_binary(int num)
{
	int d = 1 << 10;
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
