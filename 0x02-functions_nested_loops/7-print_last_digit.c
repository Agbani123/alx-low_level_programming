#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @c : arguement
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
int a;
a = c % 10;
if (a < 0)
a *= -1;
_putchar(a + '0');
return (a);
