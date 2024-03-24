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
	int j, i;
	char *str;

	i = 0;
	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					printf("%s", "(nil)");
				printf("%s", str);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j != 1)
		{
			printf("%s", ", ");
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
