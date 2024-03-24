#include "stdio.h"
#include "stdlib.h"
#include "3-calc.h"
/**
 * op_add - calculates the sum of two arguments
 * @a: the first argument
 * @b: the second argument
 * Return: the result of the operation
 * On error, nothing
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of two arguments
 * @a: the first argument
 * @b: the second argument
 * Return: the result of the operation
 * On error, nothing
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of two arguments
 * @a: the first argument
 * @b: the second argument
 * Return: the result of the operation
 * On error, nothing
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the division of two arguments
 * @a: the first argument
 * @b: the second argument
 * Return: the result of the operation
 * On error, it exits with status code 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates modulo of first argument with respect to the second one
 * @a: the first argument
 * @b: the second argument
 * Return: the result of the operation
 * On error, it exits with status code 100
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
