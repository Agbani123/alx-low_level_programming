#include <stdio.h>

/**
 * main-All possible different combinations of two digits
 * Return: always 0
 */

int main(void)
{
int a, i;
for (a = 0; a < 10; a++)
{
for (i = 0; i < 10; i++)
{
if (a < i)
putchar(a);
putchar(i);
}
putchar(',');
putchar(' ');
}
return (0);
}
