#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of");
	printf(n);
	printf("is ");
	if (n % 10 > 5)
	  {
	    printf("%d and is greater than 5",n%10>5);
	  }
	else if (n%10 == 0)
	  {
	    printf("%d and is 0",n%10>5);
	  }
	else if ((n%10 < 6) && (n%10 != 0))
	  {
	    printf("%d is less than 6 and not 0",n%10>5);
	  }
	printf("\n");
	return (0);
}
