#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_char(va_list lst);
int print_string(va_list lst);
int print_int(va_list lst);
int _putchar(char c);

#endif
