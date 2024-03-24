#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints all the arguments
 * @format: the data type of the argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char ch;
	int num;
	unsigned int i;
	double f;
	char *str;

	va_start(ap, format);
	for (i = 0; i < strlen(format); i++)
	{
		if (format[i] == 'c')
		{
			ch = (char)va_arg(ap, int);
			printf("%c, ", ch);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(ap, int);
			printf("%d, ", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(ap, double);
			printf("%f, ", f);
		}
		else if (format[i] == 's')
		{
			str = va_arg(ap, char*);
			printf("%s, ", str);
		}
	}
	va_end(ap);
	printf("\n");
}
