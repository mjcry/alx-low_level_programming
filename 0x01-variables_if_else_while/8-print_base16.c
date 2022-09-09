#include <stdio.h>
/**
 *
 * main - entry main funtions
 *
 * return: return to zero (success)
 *
 */
int main(void)
{
	int hex;

	hex = 0;
	while (hex < 16)
	{
		if(hex <= 9)
		{
			putchar(hex + '0');
		}
		else
		{
			putchar(hex + 87);
		}
		++hex;
	}

	return(0);
}
