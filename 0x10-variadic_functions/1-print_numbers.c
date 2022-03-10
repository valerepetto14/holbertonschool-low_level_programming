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
	int num;

	if (separator != NULL)
	{
	va_start(parametros, n);
	for (iter = 1; iter <= n; iter++)
	{
		num = va_arg(parametros, int);
		if (iter == n)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}
	va_end(parametros);
	}
	else
	{
	for (iter = 0; iter < n; iter++)
	{
		num = va_arg(parametros, int);
		printf("%d", num);
	}
	va_end(parametros);
	}
	printf("\n");
}
