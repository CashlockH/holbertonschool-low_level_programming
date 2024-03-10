#include "main.h"
#include <stdio.h>
/**
 * main - prints the arguments folowed by a newline
 * @argc: the number of the arguments passed to the program
 * @argv: the pointer points to array contains argumants
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
