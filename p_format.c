#include "holberton.h"

/**
 * p_format - print a pointer
 * @spec: the spec string
 * @data: the pointer to print
 * Return: the length of the spec string (to skip over it)
 */
int p_format(char *spec, void *data)
{
	_putchar('0');
	_putchar('x');
	x_format("%x", (unsigned long int)data);
	/*The default spec length is 2*/
	return (2);
}
