#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * funcswitch - dispatch the appropriate data to the appropriate formatter
 * @y: The pointer to % in the spec string
 * @specifier: the spec character
 * @al: the va_list to pull args from
 * @q: a pointer to the globs
 * Return: The amount to shift the pointer forward in the calling function
 */
int funcswitch(char *y, char specifier, va_list al, glob *q)
{
	switch (specifier)
	{
	case 'd':
	case 'i':
		return (di_format(y, va_arg(al, long int), q));
	case 'o':
		return (o_format(y, va_arg(al, unsigned long int), q));
	case 'u':
		return (u_format(y, va_arg(al, unsigned long int), q));
	case 'x':
		return (x_format(y, va_arg(al, unsigned long int), q));
	case 'X':
		return (X_format(y, va_arg(al, unsigned long int), q));
	case 'c':
		return (c_format(y, va_arg(al, int), q));
	case 's':
		return (s_format(y, va_arg(al, char *), q));
	case 'p':
		return (p_format(y, va_arg(al, void *), q));
	case 'S':
		return (S_format(y, va_arg(al, char *), q));
	case 'r':
		return (r_format(y, va_arg(al, char *), q));
	case 'R':
		return (R_format(y, va_arg(al, char *), q));
	case 'b':
		return (b_format(y, va_arg(al, unsigned int), q));
	case '%':
		if (*y == '%' && *(y + 1) == '%')
			return (c_format("%c", '%', q));
	case '\0':
/*!!!-risky behavior here-!!!*/
		q->count = -1;
		return (1);
	default:
		c_format("%c", '%', q);
		c_format("%c", specifier, q);
		return (2);
	}
}

/**
 * getspec - get the first specifier occurrence after a %
 * @s: the start of the format string (minus the beginning %)
 * Return: the spec char
 */
char getspec(char *s)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		switch (s[i])
		{
		case 'd':
		case 'i':
		case 'o':
		case 'u':
		case 'x':
		case 'X':
		case 'c':
		case 's':
		case 'p':
		case 'S':
		case 'r':
		case 'R':
		case 'b':
			return (s[i]);
		case '%':
			if (i == 0)
				return (s[i]);
			else
				return (s[0]);
		case '\0':
			return (s[0]);
		}
	}
}

/**
 * _printf - the custom implementation of the printf function
 * @fmt: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *fmt, ...)
{
	int i;
	char tmp;
	va_list vl;
	/* The print counter is q */
	glob q;

	q.count = 0;
	q.bufind = 0;
	resetbuf(q.buf);

	if (!fmt)
		return (-1);

	va_start(vl, fmt);

	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			tmp = getspec((char *)fmt + i + 1);
			i = i + funcswitch((char *)fmt + i, tmp, vl, &q);
		} else
		{
			c_format("%c", fmt[i], &q);
			i = i + 1;
		}
	}
	va_end(vl);

	if (q.bufind)
	{
		write(1, q.buf, q.bufind);
	}

	return (q.count);
}

/**
 * resetbuf - reset the buffer to be full of zeros
 * @x: a buffer of size 1024 to set to zeros
 * Return: always 0
 */
int resetbuf(char *x)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		x[i] = '\0';
	}
	return (0);
}
