y/**
 * print_line - writes the character c to stdout
 * @n: The number of characters to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
int i = 0;
for (; i < n ; i++)
_putchar(95);
_putchar('\n');
}
