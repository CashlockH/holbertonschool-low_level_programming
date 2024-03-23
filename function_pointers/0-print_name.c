#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - calls the function printing the name
 * @name: the name to be printed
 * @f: the fuction pointer that is pointed to the function printing name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
