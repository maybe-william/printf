#include "holberton.h"
/**
  * s_format - prints string
  * @format: format specifier
  * @s: input string
  * @q: a pointer to the print counter
  * Return: length of format specifier
  */
int s_format(char *format, char *s, int *q)
{
	char *temp;

	(void) format;

	temp = s;

	if (temp == 0)
	{
		_putchar('(', q);
		_putchar('n', q);
		_putchar('u', q);
		_putchar('l', q);
		_putchar('l', q);
		_putchar(')', q);
		return (2);
	}
	while (*temp)
	{
		_putchar(*temp, q);
		temp++;
	}
	return (2);
}
