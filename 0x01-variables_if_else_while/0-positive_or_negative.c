#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
	int n;	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{	
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
