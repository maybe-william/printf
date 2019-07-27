#include "holberton.h"
/**
  * u_format - prints unsigned int
  * @format: format specifier
  * @n: input unsigned int
  * Return: length of format specifier
  */
int u_format(char *format, unsigned int n)
{
	int count = 1, divide = 1;

	while (divide <= n/10)
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
