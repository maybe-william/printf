#include "holberton.h"

/**
 * p_format - print a pointer
 * @spec: the spec string
 * @data: the pointer to print
 * @n: a pointer to the print counter
 * Return: the length of the spec string (to skip over it)
 */
int p_format(char *spec, void *data, int *n)
{
	_putchar('0', n);
	_putchar('x', n);
	x_format("%x", (unsigned long int)data, n);
	/*The default spec length is 2*/
	return (2);
}
