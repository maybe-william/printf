#include "holberton.h"
/**
  *
  *
  *
  */
void get_hexX(int unsigned n)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hexX(n / 16);
			_putchar(temp + 48);
		}

		else
		{
			get_hexX(n / 16);
			_putchar(temp + 55);
		}
	}
}

int X_format(char *format, unsigned int n)
{
	get_hexX(n);

	return (2);
}
