#include "holberton.h"
/**
  * print_rev - prints string in reverse
  * @s: input string
  */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
/**
  * r_format - sends string to print_rev
  * @format: format specifier
  * @s: input string
  * Return: format specifier length
  */
int r_format(char *format, char *s)
{
	print_rev(s);

	return (2);
}
