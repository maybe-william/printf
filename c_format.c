#include "holberton.h"

/**
 * c_format - prints a character
 * @format: format specifier
 * @c: input character
 * @n: a pointer to the globs
 * Return: number of characters in format specifier
 */
int c_format(char *format, char c, glob *n)
{
	(void) format;
	_putchar((unsigned char)c, n);
	return (2);
}
