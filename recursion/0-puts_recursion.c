#include "main.h"
/**
 * _puts_recursion - it call the inner-scope function to initiate recursion
 * @s: this is pointer that holds the adress of string
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	int _nese(char*b ,int i);
	_nese(s, 0);
}
/**
* _nese - it creates recursion to print the string
* @i: this is intefer indicates the index of string and used in recursion
* Return: returns 0 as and exit for recursion or 1 at the end.
*/
int _nese(char *b, int i)
{
	if (b[i] == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(b[i]);
	_nese(b, i + 1);
	return(1);
}
