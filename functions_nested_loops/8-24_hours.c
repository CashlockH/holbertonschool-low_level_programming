#include "main.h"
/**
 * jack_bauer - check the code
 * Return: Aadf.
 */
void jack_bauer(void)
{
char hour[] = "00";
char minute[] = "00";
int d = 0, f = 0, g = 0, h = 0;
for (; h <= 23 ; h++)
{
g = 0;
for (; g <= 9; g++)
{
f = 0;
for (; f <= 5; f++)
{
d = 0;
for (; d <= 9; d++)
{
_putchar(hour[0] + h);
_putchar(hour[1] + g);
_putchar(':');
_putchar(minute[0] + f);
_putchar(minute[1] + d);
_putchar('\n');
}}}}}
