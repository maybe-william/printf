#include "holberton.h"

/**
 * R_format - print a string in ROT13
 * @spec: the spec string
 * @data: the string to print
 * @q: a pointer to the print counter
 * Return: the length of the spec string (to skip over it)
 */
int R_format(char *spec, char *data, int *q)
{
	char *s1;
	int i, printed;
	char *reg;
	char *lt;

	(void) spec;

	s1 = data;
	reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	lt = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s1 != '\0')
	{
		printed = 0;
		for (i = 0; reg[i] != '\0'; i++)
		{
			if (*s1 == reg[i])
			{
				_putchar(lt[i], q);
				printed = 1;
				break;
			}
		}
		if (!printed)
			_putchar(*s1, q);
		s1 = s1 + 1;
	}
	/*The default spec length is 2*/
	return (2);
}
