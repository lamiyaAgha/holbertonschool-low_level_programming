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
int number = 0;

while (number <= 9)
{
putchar(48 + number);
number++;
}
putchar('\n');
return (0);
}
