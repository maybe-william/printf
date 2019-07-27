#include "holberton.h"

void rec_r_form(char *);

/**
 * r_format - print a string in reverse
 * @spec: the spec string
 * @data: the string to print
 * Return: the length of the spec string (to skip over it)
 */
int r_format(char *spec, char *data)
{
	char *tmp = spec;

	rec_r_form(data);
	/*The default spec length is 2*/
	return (2);
}

/**
 * rec_r_form - recursively print the string in reverse
 * @data: the string to print
 */
void rec_r_form(char *data)
{
	if (*data == '\0')
		return;
	rec_r_form(data + 1);
	_putchar(data);
}
