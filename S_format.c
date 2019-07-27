#include "holberton.h"
/**
  *
  *
  *
  */
int hex_count(int n)
{
	int temp = 0;

	int count = 0;

	while (n != 0)
	{
		count++;
		n /= 16;
	}

	return (count);
}

int S_format(char *format, char *s, int *n)
{
	char *copy, temp;

	int check = 0;

	copy = s;

	while (*copy)
	{
		if (*copy < 32 || *copy >= 127)
		{
			temp = *copy;
			_putchar('\\', n);
			_putchar('x', n);
			check = hex_count(temp);
			if ( check == 1)
				_putchar('0', n);
			X_format("%X", temp, n);
		}
		else
			_putchar(*copy, n);
		copy++;
	}
	return (2);
}
