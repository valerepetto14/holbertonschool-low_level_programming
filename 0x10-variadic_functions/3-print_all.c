#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void printchar(va_list a);
void printstr(va_list a);
void printint(va_list a);
void printfloat(va_list a);
/**
*print_all - print
*@format: char
**/
void print_all(const char * const format, ...)
{ /**VARIABLES **/
	int i = 0, e;
	char *separador = "";

	op_t type[] = {
	{'c', printchar},
	{'s', printstr},
	{'i', printint},
	{'f', printfloat},
	{'\0', NULL}
			};
	va_list lista;
/**----VARIABLES---- **/
	va_start(lista, format);
	e = 0;
	while (format != NULL && format[e] != '\0')
	{
		i = 0;
		while (type[i].tipo != '\0')
		{
			if (type[i].tipo == format[e])
			{
				printf("%s", separador);
				type[i].f(lista);
				separador = ", ";
			}
			i++;
		}
		e++;
	}
	va_end(lista);
	printf("\n");
}
/**------- FUNCIONES -------**/

/**
  *printchar - p
  *@a: c
**/
void printchar(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 *printstr - p
 *@a: c
 **/
void printstr(va_list a)
{
	char *str;

	str = va_arg(a, char*);

	if (str == NULL)
					{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}
/**
 *printint - p
 *@a: i
 **/
void printint(va_list a)
{
	printf("%i", va_arg(a, int));
}
/**
 *printfloat - p
 *@a: f
 **/
void printfloat(va_list a)
{
	printf("%f", va_arg(a, double));
}
