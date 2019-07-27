#include "holberton.h"
/**
  *
  *
  *
  */
int di_format(char *format, int n)
{
	int count = 1, divide = 1, temp;

	while (divide <= n / 10)
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

int main(void)
{
	int i = 123456789;

	di_format("%d", i);
	return (0);
}
