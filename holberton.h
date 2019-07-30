#ifndef PRINT_H
#define PRINT_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct glob - 'global variables' passed eventually to _putchar
 * @buf: a write buffer of size 1024
 * @bufind: the current buffer index
 * @count: the current printed char count
 */
typedef struct glob
{
	char buf[1024];
	int bufind;
	int count;
} glob;

int resetbuf(char *);

int _putchar(char c, glob *);

int di_format(char *, unsigned long int, glob *);

int o_format(char *, unsigned long int, glob *);

int X_format(char *, unsigned long int, glob *);

int u_format(char *, unsigned long int, glob *);

int x_format(char *, unsigned long int, glob *);

int c_format(char *, char, glob *);

int s_format(char *, char *, glob *);

int p_format(char *, void *, glob *);

int S_format(char *, char *, glob *);

int r_format(char *, char *, glob *);

int R_format(char *, char *, glob *);

int b_format(char *, unsigned int, glob *);

int _printf(const char *, ...);

#endif
