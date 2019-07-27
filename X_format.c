#include "holberton.h"
/**
  *
  *
  *
  */
void get_hexX(int unsigned n, int *n)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hexX(n / 16);
			_putchar(temp + 48, n);
		}

		else
		{
			get_hexX(n / 16);
			_putchar(temp + 55, n);
		}
	}
}

int X_format(char *format, unsigned int n, int *i)
{
	get_hexX(n, i);

	return (2);
}
