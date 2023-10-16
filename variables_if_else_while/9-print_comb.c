#include <stdio.h>

int main(void)
{
    int i = '0';
    do
      {
	putchar(i);
	putchar(',');
	putchar(' ');
	if (i == '9')
	  {
	    putchar('\n');
	  }
	i++;
      } while (i <= '9');
    return 0;
}
