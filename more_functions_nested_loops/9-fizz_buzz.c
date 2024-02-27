#include <stdio.h>
/**
 * main - writes the character c to stdout
 * Return: nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
int i = 1;
for (; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("%s", "FizzBuzz");
else if (i % 3 == 0)
printf("%s", "Fizz");
else if (i % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
