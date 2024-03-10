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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("%s\n", "Error");
	return (1);
}
