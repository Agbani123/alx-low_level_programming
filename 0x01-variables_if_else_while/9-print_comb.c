#include <stdio.h>

/**
 * main- all possible combinations of single digit numbers
 * Return: always 0
 */

int main(void)
{
int a;
for (a = 0; a < 10; a++)
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
return (0);
}
