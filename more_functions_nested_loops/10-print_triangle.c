/**
 * print_triangle - prints triangle
 * @size: The character to print
 *
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
if (size < 0)
size = 0;
int i = 1;
int j = 1;
while (i != size + 1)
{
j = 0;
for (; j <= size - i; j++)
_putchar(' ');
for (; j <= size; j++)
_putchar(35);
_putchar('\n');
i++;
}
_putchar('\n');
}
