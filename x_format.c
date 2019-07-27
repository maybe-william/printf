#include "holberton.h"
/**
  *
  *
  *
  *
  */
void get_hexx(long int unsigned n, int *q)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hexx(n / 16, q);
			_putchar(temp + 48, q);
		}
		else
		{
			get_hexx(n / 16, q);
			_putchar(temp + 87, q);
		}
	}
}


int x_format(char *format, long int unsigned n, int *q)
{
	get_hexx(n, q);

	return (2);
}
