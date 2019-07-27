#include "holberton.h"
/**
  * di_format - prints int
  * @format: format specifier
  * @n: input int
  * Return: length of format specifier
  */
int di_format(char *format, int n)
{
	int count = 1, divide = 1;

	while (divide <= n / 10)
	{
		count++;
		divide *= 10;
	}

	while (count > 0)
	{
		_putchar((n / divide) + '0');
		n %= divide;
		divide /= 10;
		count--;
	}
	return (2);
}
