/**
 * _pow_recursion - calculates the values of x to the power of y
 * @x: the input integer of which the power should be calculated
 * @y: the power integer
 * Return: the value of the power of the integer
 * On error, returns -1
 */
int _pow_recursion(int x, int y)
{
	int a;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	a = x * _pow_recursion(x, y - 1);
	return (a);
}
