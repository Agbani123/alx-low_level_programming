#include <stdio.h>

/**
 * main- lowercase alphabet, then uppercase
 * Description: Prints the whole alphabets, lower before upper
 * Return: always 0
 */

int main(void)
{
char ch;
for (ch = "a", ch <= "z", ch++)
{
putchar(ch);
}
for (ch = "A", ch <="Z", ch++)
{
putchar(ch);
}
putchar("\n");
return (0);
}
