#include "main.h"
/**
 * _strlen - entry point
 * @n - n is int
 * @s: s is an int
 * Return: return to zero
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n = n + 1;
		s = s + 1;
	}

	return (n);
}
