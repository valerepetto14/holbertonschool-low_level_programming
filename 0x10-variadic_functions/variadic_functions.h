#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct op - struct to use it later
 * @tipo: symbol to print
 * @f:funcion
**/
typedef struct type_s
{
	char tipo;
	void (*f)(va_list);
} types_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
