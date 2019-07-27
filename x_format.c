#include "holberton.h"
/**
  *
  *
  *
  *
  */
void get_hexx(int unsigned n)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hexx(n / 16);
			_putchar(temp + 48);
		}
		else
		{
			get_hexx(n / 16);
			_putchar(temp + 87);
		}
	}
}


int x_format(char *format, int unsigned n)
{
	get_hexx(n);

	return (2);
}
