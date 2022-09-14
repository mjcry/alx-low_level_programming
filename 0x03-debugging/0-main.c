#include <stdio.h>
#include "main.h"
/**
 * main - entry point to the program.
 *
 * Return: return to zero.
 */
int main (void)
{
	int i = 98;

	if (i < '0')
	{
		printf("This is a positive number \n %d", i);
	}
	else if (i == '0')
	{
		printf("This number is zero\n%d", i);
	}
	else
	{
		printf("This is a negative number \n%d", i);
	}
	return (0);
}
