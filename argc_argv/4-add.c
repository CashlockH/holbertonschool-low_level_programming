#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the answer of mu;tipilication of two integers
 * @argc: the number of the arguments passed to the program
 * @argv: the pointer points to array contains argumants
 * Return: 0
 * On error, 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int add = 0;

	if (argc > 1)
	{
		for (; i < argc ; i++)
		{
			for (j = 0; argv[i][j] != '\0' ; j++)
			{
				if (argv[i][j] >= 48 && argv[i][j] <= 57)
				{
					if (j == 0)
						add = add + atoi(argv[i]);
				}
				else
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
		}
	}
	printf("%d\n", add);
	return (0);
}
