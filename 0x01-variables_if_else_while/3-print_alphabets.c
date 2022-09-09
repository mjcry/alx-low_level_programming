#include <stdio.h>
/**
 * main - Entry fuction
 *
 * Return: Always return 0
 */
int main(void)
{
	char low;
	char up;

	low = 97;
	up = 65;

	while (low <= 122)
	{
		putchar(low);
		++low;
	}
	while (up <= 90)
	{
		putchar(up);
		++up;
	}

	putchar(10);
	return (0);
}
