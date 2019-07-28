#include "holberton.h"

/**
 * c_format - prints a character
 * @format: format specifier
 * @c: input character
 * @n: a pointer to the print counter
 * Return: number of characters in format specifier
 */
int c_format(char *format, char c, int *n)
{
	(void) format;
	_putchar(c, n);
	return (2);
}
