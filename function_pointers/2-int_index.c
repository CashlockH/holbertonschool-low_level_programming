#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - calls the function printing the array
 * element index that is fitted to the critics by using function pointer
 * @array: pointer to array which should be printed
 * @size: size of the array
 * @cmp: function pointer that is used to call
 * the fuctions that compares the values
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int a = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
	return (-1);
	while (i < size)
	{
		a = cmp(array[i]);
		if (a != 0)
			return (i);
		i++;
	}
	return (-1);
}
