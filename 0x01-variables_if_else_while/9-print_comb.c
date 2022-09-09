#include <stdio.h>
/**
 *
 * main - entry main fuction
 *
 * return - return to zero (sucess)
 */
int main(void)
{
	int num
	
	num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar(10);
	return(0);
}
