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
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
