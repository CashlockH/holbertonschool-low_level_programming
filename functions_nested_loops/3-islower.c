#include "main.h"
/**
 *_islower - checks if the letter is lowercase or not
 *Return: 0 or 1
 *@c:character in alphabet
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
