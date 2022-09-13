#include "holberton.h"
/**
 * _isalpha - a function that checks alphabet char
 *
 * Return: 1 if c is a letter
 */
int -isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || (( c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
