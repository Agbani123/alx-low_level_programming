#include <stdio.h>

/**
 * main-All possible different combinations of two digits
 * Return: always 0
 */

int main(void)
{
int a, i;
for (a = 0; a < 9; a++)
{
for (i = 1; i < 10; i++)
{
if (a < i)
{
putchar(a + '0');
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
}
return (0);
}
