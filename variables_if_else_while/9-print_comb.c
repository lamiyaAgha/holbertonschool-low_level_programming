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
int i = '0';
putchar(i);
do
{
i++;
putchar(',');
putchar(' ');
putchar(i);
} while (i <= '8');
return (0);
}
