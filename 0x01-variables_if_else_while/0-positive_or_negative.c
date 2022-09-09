#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* int main - main Entry point */

/* return - return always 0 (Success) */

/* int - declares the integer that is n */

/**
* if - num is greater than 0 printf
*
* main - Entry point
*
* if else - number is equal to zero printf
*
* else - number is a negative
*
* return - return one  of the 3 options
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand(void) - RAND_MAX / 2;
	if (n > 0)
	{
	printf("Your Number is postive %d\n", n);
	}
	else if (n == 0)
	{
	printf("This is zero %d\n", n);
	}
	else
	{
	printf("The Number is a negative %d\n", n);
	}
	return (0);
}
