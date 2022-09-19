#include <main.h>

/**
 * print_alphabet_x10- print the alphabet 10x
 * Return: always 0
 */

void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 1; i < 11; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
putchar('\n');
}
}
