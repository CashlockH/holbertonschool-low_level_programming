#include "main.h"
/**
 * swap_int - swap the values of the input variables
 * @a: The number to point
 * @b: The number to point
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
