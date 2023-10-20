#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: This program generates a random number and
 * determines whether it is positive, zero, or negative.
 *
 * Return: Always 0
 */
int _putchar(char c);
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}

int _putchar(char c)
{
  return write(1,&c,1);
}
