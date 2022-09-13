#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - this functions prints out alphabets
 *
 * main - main entry point
 *
 * if - if to repect the alphbate
 *
 * Return: Returnto zero
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
