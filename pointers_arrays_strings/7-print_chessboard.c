#include "main.h"
/**
 * print_chessboard - prints the chessboard items with their first letters
 * @a: pointer to 2d array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
while (i <= 63)
{
if (i % 8 == 0 && i != 0)
_putchar('\n');
_putchar(*(a[0] + i));
i++;
}
_putchar('\n');
}
