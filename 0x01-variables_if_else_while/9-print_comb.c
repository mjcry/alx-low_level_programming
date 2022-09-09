#include <stdio.h>
/**
 * main - entry main fuction
 *
 * int - integer is called as variable caleled num
 *
 * while - to repeat the numbers till we get 9
 *
 * putchar - used to decaler number and to print it out
 *
 * if - if the number is inverse and = 9 the output
 *
 * num++ - is a statement
 *
 * return - return to 0 t0 9 decimals (sucess)
 */
int main(void)
{
	int num = '0';

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
	return (0);
}
