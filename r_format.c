#include "holberton.h"


int r_format(char *spec, char *data)
{
	char *tmp = spec;

	rec_r_form(data);
	/*The default spec length is 2*/
	return (2);
}


void rec_r_form(char *data)
{
	if (*data == '\0')
		return;
	rec_r_form(data + 1);
	_putchar(data);
}
