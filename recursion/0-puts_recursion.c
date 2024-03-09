/**
 * _puts_recursion - it call the inner-scope function to initiate recursion
 * @s: this is pointer that holds the adress of string
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	void _nese(int i);
	_nese(0);
}
/**
* _nese - it creates recursion to print the string
* @i: this is intefer indicates the index of string and used in recursion
* Return: returns 0 as and exit for recursion.
*/
void _nese(int i)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(s[i]);
	_nese(i + 1);
}
