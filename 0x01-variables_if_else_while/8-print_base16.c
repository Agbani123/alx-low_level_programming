#include <stdio.h>

/**
 * main- numbers of base 16 in lowercase
 * Return: always 0
 */

int main(void)
{
int a;
char ch;
for (a = 0; a < 10; a++)
putchar(a + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
