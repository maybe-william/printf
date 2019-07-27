#include "holberton.h"
/**
  *
  *
  *
  */
void get_oct(unsigned int n, int *i)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 8;
		get_oct(n / 8, i);
		_putchar(temp + 48, i);
	}
}
int o_format(char *format, unsigned int n, int *i)
{
	get_oct(n, i);

	return (2);
}
