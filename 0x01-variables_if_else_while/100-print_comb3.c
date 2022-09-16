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
putchar(a);
putchar(a + '1');
}
putchar(',');
putchar(' ');
return (0);
}
