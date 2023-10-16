#include <stdio.h>

int main(void)
{
    int i = '0';

    while (i <= '9')
    {
        int j = '0';

        while (j <= '9')
        {
            putchar(i);
            putchar((j == '9') ? '\n' : ',');
            if (j != '9')
                putchar(' ');

            j++;
        }

        i++;
    }

    return 0;
}
