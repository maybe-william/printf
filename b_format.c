#include "holberton.h"

void b_form_rec(unsigned int x, glob *n);

/**
 * b_format - print a number in binary
 * @spec: the spec string
 * @data: the unsigned int
 * @n: a pointer to the globs
 * Return: the length of the spec string (to skip over it)
 */
int b_format(char *spec, unsigned int data, glob *n)
{
	(void) spec;
	b_form_rec(data, n);
	if (!data)
		_putchar('0', n);
	/*The default spec length is 2*/
	return (2);
}

/**
 * b_form_rec - print a number in binary recursively
 * @x: the number
 * @n: a pointer to the globs
 */
void b_form_rec(unsigned int x, glob *n)
{
	if (!x)
		return;
	b_form_rec(x / 2, n);
	_putchar(x % 2 + '0', n);
}
