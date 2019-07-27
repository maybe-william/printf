#include "holberton.h"
/**
  * di_format - prints int
  * @format: format specifier
  * @n: input int
  * Return: length of format specifier
  */
int di_format(char *format, int n, int *q)
{
	int count = 1, divide = 1;

	if (n < 0 && n > -2147483648)
	{
		n *= -1;
		_putchar('-', q);
	}

	if (n == -2147483648)
	{
		n -= -1;
		n *= -1;
		_putchar('-', q);
	}

	while (divide <= n / 10)
	{
		count++;
		divide *= 10;
	}

	while (count > 0)
	{
		if (n == -2147483648 && divide == 1)
			n += 1;
		_putchar((n / divide) + '0', q);
		n %= divide;
		divide /= 10;
		count--;
	}
	return (2);
}
