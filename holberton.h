#ifndef PRINT_H
#define PRINT_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
