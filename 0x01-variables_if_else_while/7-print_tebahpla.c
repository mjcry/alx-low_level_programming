#include <stdio.h>
/**
 * main - main fuction entry to the code
 *
 * Return: Return must end program
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; --az)
		putchar(az);
	putchar(10);
	return (0);
}
