#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int printf_ptr(va_list val);
int printf_int(va_list argz);
int _strlen(char *s);
int _strlenchar(const char *s);
int printf_55(void);
int printf_char(va_list val);
int printf_str(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
