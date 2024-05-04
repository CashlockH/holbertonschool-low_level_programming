#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - allocate memory of which size equals to b
 *@b: the size of the should be allocated
 *Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	/*p*/
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
