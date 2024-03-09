#include "main.h"
/**
 * _strlen_recursion - call strlen_recursion to initiate the recursion
 * @s: string pointer of which lenght should be measured
 * Return: the lenght of the string s
 */
int _strlen_recursion(char *s)
{
	int strlen_recursion(char *b, int i);
	return (strlen_recursion(s, 0));
}
/**
 * strlen_recursion - recursive function to calculate the lenght of array
 * @b: the same as s
 * @i: it gets the lenght value at the end
 * Return: the length of the array
 */
int strlen_recursion(char *b, int i)
{
	int ah;
	if (b[i] == '\0')
	{
		return (i);
	}
	ah = strlen_recursion(b, i + 1);
	return (ah);
}
