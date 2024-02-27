/**
 * print_diagonal - writes the character c to stdout
 * @n: The number of characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int j = 0;
int i = 0;
for (; i < n ; i++)
{
_putchar(92);
_putchar('\n');
j = 0;
for (; j < i + 1; j++)
{
_putchar(' ');
}
}
}
