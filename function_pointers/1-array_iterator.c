#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls the function printing the array
 * element by using function pointer
 * @array: pointer to array which should be printed
 * @size: size of the array
 * @action: function pointer that is used to call the printing functions
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i <= size)
	{
		action(array[i]);
		i++;
	}
}
