#include <stdio.h>
/**
 * main - entry funtions
 *
 * Return: Return to 0(success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; ++num)
		putchar(num);

	putchar(10);
	return (0);
}
