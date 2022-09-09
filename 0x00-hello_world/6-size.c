#include <stdio.h>

/**
 * main - entry point
 *
 *Return: Always 0(Success)
 */

int main(void)
{
char chartype;
int inttype;
longint longinttype;
longlongint longlonginttype;
float floattype;

printf("Size of a char: %zu bytes \n", sizeof(chartype));
printf("Size of an int: %zu bytes \n", sizeof(inttype));
printf("Size of a long int: %zu bytes \n", sizeof(longinttype));
printf("Size of a long long int: %zu bytes \n", sizeof(longlonginttype));
printf("Size of a float: %zu bytes \n", sizeof(floattype));
return (0);
}
