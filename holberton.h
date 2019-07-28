#ifndef PRINT_H
#define PRINT_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c, int *);

int di_format(char *, long int, int *);

int o_format(char *, unsigned int, int *);

int u_format(char *, unsigned int, int *);

int x_format(char *, unsigned long int, int *);

int X_format(char *, unsigned int, int *);

int c_format(char *, char, int *);

int s_format(char *, char *, int *);

int p_format(char *, void *, int *);

int S_format(char *, char *, int *);

int r_format(char *, char *, int *);

int R_format(char *, char *, int *);

int b_format(char *, unsigned int, int *);

int _printf(const char *, ...);

#endif
