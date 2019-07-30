#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @q: a pointer to the globs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, glob *q)
{
	q->count = q->count + 1;

	if (q->bufind == 1024)
	{
		write(1, q->buf, 1024);
		resetbuf(q->buf);
		q->bufind = 0;
	}
	(q->buf)[(q->bufind)] = c;
	q->bufind = q->bufind + 1;
	return (0);
}
