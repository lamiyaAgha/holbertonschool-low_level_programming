#include <stdio.h>

int main(void)
{
    char hexDigit;

    /* Print numbers '0' to '9'*/
    for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
    {
        putchar(hexDigit);
    }

    for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
    {
        putchar(hexDigit);
    }

    putchar('\n');

    return 0;
}
