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
	int i, j, a, b, result;
	char op[2];

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (strchr("+-*/%", argv[i][j]))
			{
				if (argv[i][j - 1] == '\\')
				{
					printf("%s\n", "Error");
					exit(99);
				}
				a = atoi(argv[i - 1]);
				b = atoi(argv[i + 1]);
				op[0] = argv[i][j];
				op[1] = '\0';
				result = get_op_func(op)(a, b);
				printf("%d\n", result);
				return (0);
			}
		}
	}
	printf("%s\n", "Error");
	exit(99);
}
