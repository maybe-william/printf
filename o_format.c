#include "holberton.h"
/**
  *
  *
  *
  */
void get_oct(int n)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 8;
		get_oct(n / 8);
		_putchar(temp + 48);
	}
}
int o_format(char *format, unsigned int n)
{
	get_oct(n);

	return (2);
}
