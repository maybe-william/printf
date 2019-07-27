#ifndef PRINT_H
#define PRINT_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

int di_format(char *, int);

int o_format(char *, unsigned int);

int u_format(char *, unsigned int);

int x_format(char *, unsigned long int);

int X_format(char *, unsigned int);

int c_format(char *, char);

int s_format(char *, char*);

int p_format(char *, void *);

int S_format(char *, char *);

int r_format(char *, char *);

int R_format(char *, char *);

int b_format(char *, unsigned int);

int _printf(const char *, ...);

#endif
