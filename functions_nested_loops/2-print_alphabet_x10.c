#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet in lowercase 10 times
 *Returns: nothing
 */
void print_alphabet_x10(void)
{
int i = 0;
for (; i <= 9 ; i++)
{
char str = 'a';
for (; str <= 'z' ; str++)
{
_putchar(str);
}
_putchar('\n');
}
}
