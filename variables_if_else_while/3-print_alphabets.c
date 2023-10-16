#include <stdio.h>

int main(void)
{
    char letter = 'a';

    /* Print lowercase alphabet*/
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    /*  Reset letter to 'A' for uppercase */
    letter = 'A';

    /* Print uppercase alphabet */
    while (letter <= 'Z')
    {
        putchar(letter);
        letter++;
    }

    /* Print a newline character */
    putchar('\n');

    return 0;
}
