#include <stdlib.h>
#include <stdio.h>
/**
 * main - squence of lovercase letters except q and e
 * Return: 0
 */
int main(void)
{
char ch = 'a';
for (; ch != 'z' + 1 ; ch++)
{
if (ch == 'q' || ch == 'e')
continue;
putchar(ch);
}
putchar('\n');
return (0);
}
