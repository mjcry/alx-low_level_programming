#include <stdio.h>
/**
 * main - main entry point
 *
 * while - printout the alphabate 10 time
 *
 * Return: Return to zero
 */
int main(void)
{
	void print_alphabet_x10(void);
	int alpha, we;

	we = 0;

	while (we < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		++we;
	}

	putchar('\n');

	return (0);
}
