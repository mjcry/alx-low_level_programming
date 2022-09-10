#include <stdio.h>
/**
 * main - entry function for the program
 *
 * int main(void)- entry main fuction
 *
 * int num - integer is called as variable caleled num
 *
 * while - to repeat the numbers till we get 9
 *
 * putchar - used to decaler number and to print it out
 *
 * putchar(',')- to make space between the charather
 *
 * putchar(' ') - to make a space
 *
 * if - if the number is inverse and = 9 the output
 *
 * num++ - is a statement
 *
 * putchar(10) - the output of the whileblock
 *
 * Return: Return and end program
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
