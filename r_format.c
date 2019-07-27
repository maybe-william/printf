#include "holberton.h"
/**
  * print_rev - prints string in reverse
  * @s: input string
  */
void print_rev(char *s, int *n)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s, n);
	}
}
/**
  * r_format - sends string to print_rev
  * @format: format specifier
  * @s: input string
  * Return: format specifier length
  */
int r_format(char *format, char *s, int *n)
{
	print_rev(s, n);

	return (2);
}
