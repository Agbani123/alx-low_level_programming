#include main.h

/**
 *main- print alphabet in lowercase
 * Return: always 0
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
