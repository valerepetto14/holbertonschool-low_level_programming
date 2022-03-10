#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print
 * @separator: char
 * @n: int
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parametros;
	unsigned int iter;

	if (separator != NULL)
	{
	va_start(parametros, n);
	for (iter = 0; iter < n; iter++)
		if (iter == n - 1)
			printf("%d\n", va_arg(parametros, int));
		else
			printf("%d%s", va_arg(parametros, int), separator);
	va_end(parametros);
	}
	else
	{
	for (iter = 0; iter < n; iter++)
		printf("%d\n", va_arg(parametros, int));
	va_end(parametros);
	}
}
