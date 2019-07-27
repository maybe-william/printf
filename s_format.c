#include "holberton.h"
/**
  * s_format - prints string
  * @format: format specifier
  * @s: input string
  * Return: length of format specifier
  */
int s_format(char *format, char *s, int *q)
{
	char *temp;

	int i;

	temp = s;

	while (*temp)
	{
		_putchar(*temp, q);
		temp++;
	}
	return (2);
}
