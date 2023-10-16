#include <stdio.h>

int main(void)
{
    int number = 0;

    while (number <= 9)
    {
        putchar(48 + number);
        number++;
    }

    putchar('\n');

    return 0;
}
