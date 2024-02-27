/**
 * more_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
char a[] = "00";
int i = 0;
int j = 0;
for (; i < 13; i++)
{
if (i >= 9)
{
a[0] = '1';
_putchar(a[0]);
a[1] = a[1] + 1;
_putchar(a[1]);
}
else
{
a[0] = a[0] + 1;
_putchar(a[0]);
}
}
_putchar('\n');
}
