#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - function for
 * @argc: the number of elements
 * @argv: array of arguments to be passed to the function by the command line
 * Return: 0
 * On error, nothing
 */
int main(int argc, char *argv[])
{
	int a;
	char *op;
	int b;
	int result;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	result = get_op_func(op)(a, b);
	printf("%d\n", result);
	return (0);
}
