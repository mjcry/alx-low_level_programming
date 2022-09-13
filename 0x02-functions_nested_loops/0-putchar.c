#include <stdio.h>
#include "holberton.h"
/**
 * main - Main main Entry Point
 *
 * Print - Print  to print the statement _putchar
 *
 * Return: Return to zero
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
