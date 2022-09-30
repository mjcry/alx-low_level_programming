#include <unistd.h>
/**
 * _putchar - writes out char
 * @c: prints out the char
 * Return: return to zero
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
