#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * more headers goes there 
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is ", n);

if (n % 10 > 5)
{
printf("%d and is greater than 5", n % 10);
}
else if (n % 10 == 0)
{
printf("%d and is 0", n % 10);
}
else if ((n % 10 < 6) && (n % 10 != 0))
{
printf("%d and is less than 6 and not 0", n % 10);
}
printf("\n");

return (0);
}

