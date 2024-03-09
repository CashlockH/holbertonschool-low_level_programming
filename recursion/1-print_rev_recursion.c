#include "main.h"
/**
 * _print_rev_recursion - call rev_reverse function to initiate the recursion
 * @s: string pointer which should be printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char rev_reverse(char *b, int i);
	rev_reverse(s, 0);
	_putchar(s[0]);
}
/**
 * rev_reverse - prints the reverse string
 * @b: the same string pointer as s
 * @i: the index of the string
 * Return: the last element as exit for recursion then left one respectively
 */
char rev_reverse(char *b, int i)
{
	if (b[i + 1] == '\0')
	{
		return (b[i]);
	}
	_putchar(rev_reverse(b, i + 1));
	return (b[i]);
}
