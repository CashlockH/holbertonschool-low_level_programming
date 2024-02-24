#include "main.h"
/**
 * jack_bauer - check the code
 * Return: Aadf.
 */
void jack_bauer(void)
{
char hour[] = "00";
char minute[] = "00";
char second[] = "00";
int i = 0, b = 0, d = 0, f = 0, g = 0, h = 0;
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
b = 0;
for (; b <= 5 ; b++)
{
i = 0;
for (; i <= 9 ; i++)
{
_putchar(hour[0]);
_putchar(hour[1] + g);
_putchar(':');
_putchar(minute[0] + f);
_putchar(minute[1] + d);
_putchar(':');
_putchar(second[0] + b);
_putchar(second[1] + i);
_putchar('\n');
}}}}}}}
