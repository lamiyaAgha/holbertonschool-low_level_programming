#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program generates a random number and
 * determines whether it is positive, zero, or negative.
 *
 * Return: Always 0
 */

int main(void)
{
char hexDigit;
for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
{
putchar(hexDigit);
}
for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
{
putchar(hexDigit);
}
putchar('\n');
return (0);
}
