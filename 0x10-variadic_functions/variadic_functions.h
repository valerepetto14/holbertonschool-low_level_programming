#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdarg.h>
#include <stdlib.h>
typedef struct op
{
	char tipo;
	void (*f)(va_list);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
