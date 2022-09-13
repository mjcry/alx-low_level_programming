#include <stdio.h>
#include "main.h"
/**
 * _islower - its a fuction that checks the lower alphabates.
 *
 * @c: is an int that is used to find the value of a to z.
 * *
 * Return: Return to Zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
