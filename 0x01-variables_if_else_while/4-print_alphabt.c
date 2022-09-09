#include <stdio.h>
/**
 * main - entry function
 *
 * return: return to zero
 *
 */
int main(void)
{
	char low;
	
	low = 97;
	while (low <= 122)
	{
		if (low != 101 && low != 133)
		{
			putchar(low);
		}
		++low;
	}
	putchar(10);
	return (0);
}
