#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the arguments with separator between them
 * @separator: the string to print between arguments
 * @n: the number of the arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nese;
	unsigned int i;

	va_start(nese, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(nese, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nese);
}
