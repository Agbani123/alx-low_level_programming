#include <stdio.h>

/**
 * main- prints 3 digit combination of numbers
 * only smallest combination of 3 digits allowed
 * 012,120,102,.... are the same
 * Return: always 0
 */

int main(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 10; c++)
{
if (a < b && b < c)
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}