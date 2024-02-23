#include <stdio.h>
/**
* main - prints sizes of the types
* Return: 0
*/
int main(void)
{
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
switch (sizeof(void *))
{
case 4:
printf("Size of a long int: 4 byte(s)\n");
break;
case 8:
printf("Size of a long int: 8 byte(s)\n");
break;
}
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");
return (0);
}
