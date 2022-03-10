#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum
 * @n: int
 * Return: int
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list parametros;
	int suma = 0;
	unsigned int iter;

	if (n == 0)
		return (0);

	va_start(parametros, n);
	for (iter = 0; iter < n; iter++)
	suma += va_arg(parametros, int);

	va_end(parametros);
	return (suma);
}
