#include <stdio.h>
#include "main.h"
/**
 * main - Main main Entry Point
 *
 * Print - Print  to print the statement _putchar
 *
 * Return: Return to zero
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
