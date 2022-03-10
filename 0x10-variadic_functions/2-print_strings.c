#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print
 * @separator: char
 * @n: int
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parametros;
	unsigned int iter;
	char *string;

	va_start(parametros, n);
	for (iter = 0; iter < n; iter++)
	{
	string = va_arg(parametros, char *);
	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);

	if (iter < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(parametros);
	printf("\n");
}
