/**
 * print_numbers - writes the character c to stdout
 * Return: nothing.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
char a = '0';
for (; a <= '9'; a++)
{
_putchar(a);
_putchar('\n');
}
}
