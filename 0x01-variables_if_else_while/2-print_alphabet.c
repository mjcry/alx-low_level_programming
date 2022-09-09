#include <stdio.h>
/**
* main - main function
*
* Return: End the program
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

	return (0);
}
