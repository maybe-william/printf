#include "holberton.h"
/**
  * s_format - prints string
  * @format: format specifier
  * @s: input string
  * Return: length of format specifier
  */
int s_format(char *format, char *s)
{
	char *temp;

	int i;

	temp = s;

	while (*temp)
	{
		write(1, temp, 1);
		temp++;
	}
	return (2);
}
