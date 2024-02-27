/**
 * print_square - writes the character c to stdout
 * @size: one size of the square
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
int i = 0;
int j = 0;
while (i != size)
{
for (; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
j = 0;
i++;
}
}
