#include "main.h"
/**
 * print_last_digit - prints out the last value
 * @nld: int to fid the last num
 * Return: Returnto zero.
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
