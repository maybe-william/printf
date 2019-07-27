#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * funcswitch - dispatch the appropriate data to the appropriate formatter
 * @y: The pointer to % in the spec string
 * @specifier: the spec character
 * @al: the va_list to pull args from
 * Return: The amount to shift the pointer forward in the calling function
 */
int funcswitch(char *y, char specifier, va_list al)
{
	switch (specifier)
	{
	case 'd':
	case 'i':
		return (di_format(y, va_arg(al, int)));
	case 'o':
		return (o_format(y, va_arg(al, int)));
	case 'u':
		return (u_format(y, va_arg(al, unsigned int)));
	case 'x':
		return (x_format(y, va_arg(al, unsigned int)));
	case 'X':
		return (X_format(y, va_arg(al, unsigned int)));
	case 'c':
		return (c_format(y, va_arg(al, int)));
	case 's':
		return (s_format(y, va_arg(al, char *)));
	case 'p':
		return (p_format(y, va_arg(al, void *)));
	case 'S':
		return (S_format(y, va_arg(al, char *)));
	case 'r':
		return (r_format(y, va_arg(al, char *)));
	case 'R':
		return (R_format(y, va_arg(al, char *)));
	case 'b':
		return (b_format(y, va_arg(al, unsigned int)));
	case '\0':
		exit(1);
	case '%':
		if (*y == '%' && *(y + 1) == '%')
		{
			return (c_format("%c", '%'));
		}
		/*Error if the two % aren't right next to each other*/
		exit(1);
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
		case '%':
		case '\0':
			return (s[i]);
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

	va_start(vl, fmt);

	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			tmp = getspec((char *)fmt + i + 1);
			i = i + funcswitch((char *)fmt + i, tmp, vl);
		} else
		{
			c_format("%c", fmt[i]);
			i = i + 1;
		}
	}
	va_end(vl);
}
