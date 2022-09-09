#include <stdio.h>
/**
* main - entry functions
*
* char - call the char type for alphabet
*
* while - to repeat the type till we get all the alphabete
*
*/
int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		++alpha;
	}
	putchar(10);
	
	return(0);
}	
