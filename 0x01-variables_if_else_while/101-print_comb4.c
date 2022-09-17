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
for (a = 0; a < 8; a++)
{
for (b = 1; b < 9; b++)
{
for (c = 2; c < 10; c++)
{
if (a < b && b < c)
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
else
{
continue
}
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
