#include "holberton.h"
/**
  *
  *
  *
  */
int u_format(char *format, unsigned int n)
{
	int count = 1, divide = 1;

	while (divide <= n/10)
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
	unsigned int i = 123456789;

	u_format("%u", i);

	return (0);
}
