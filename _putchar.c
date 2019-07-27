#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - put a char
 * @c: the char to put
 * Return: 0 if kosher, -1 if problems
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
