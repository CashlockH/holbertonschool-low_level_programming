#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - describes the last digit of n
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int b;
b = n % 10;
if (b > 5)
printf("Last digit of %d is %d greater than 5", n, b);
else if (b == 0)
printf("Last digit of %d is 0", n);
else
printf("Last digit of %d is %d less than 6 and not 0", n, b);
return (0);
}
