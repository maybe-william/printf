#include "holberton.h"
/**
  *
  *
  *
  *
  */
void get_hex(int n)
{
	int temp = 0;

	if (n != 0)
	{
		temp = n % 16;

		if (temp < 10)
		{
			get_hex(n / 16);
			_putchar(temp + 48);
		}
		else
		{
			get_hex(n / 16);
			_putchar(temp + 55);
		}
	}
}


int x_format(char *format, int n)
{
	get_hex(n);

	_putchar('\n');

	return (2);
}

int main(void)
{
	x_format("%x", 17);

	return (0);
}
