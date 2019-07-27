#include "holberton.h"
/**
  * c_format - prints a character
  * @format: format specifier
  * @c: input character
  * Return: number of characters in format specifier
  */
int c_format(char *format, char c)
{
	write(1, &c, 1);
	return (2);
}
