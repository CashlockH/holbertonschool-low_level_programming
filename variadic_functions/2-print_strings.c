#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings - print string arguments with separator between them
 * @separator: the pointer to string which should be printed between arguments
 * @n:the number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *argument;
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		argument = va_arg(ap, char *);
		if (argument == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", argument);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
