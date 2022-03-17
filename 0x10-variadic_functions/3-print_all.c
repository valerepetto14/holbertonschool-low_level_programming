<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
=======
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**------- FUNCIONES -------**/

/**
  *printchar - p
  *@c: c
**/
void printchar(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 *printstr - p
 *@s: c
 **/
void printstr(va_list s)
{
	char *str;

	str = va_arg(s, char*);

	if (str == NULL)
					{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}
/**
 *printint - p
 *@i: i
 **/
void printint(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *printfloat - p
 *@f: f
 **/
void printfloat(va_list f)
{
	printf("%f", va_arg(f, double));
}
>>>>>>> 0210ee70f428c9e6b3ba4cf9094819525af144c7
/**
*print_all - print
*@format: char
**/
void print_all(const char * const format, ...)
<<<<<<< HEAD
{
	va_list ap;
	char c;
	char *s;
	float f;
	int i;
	char *form = "";
	*form = *format;

	va_start(ap, format);
	while (*form)
	{
	switch (*form++)
	{
	case 's':
		s = va_arg(ap, char *);
		printf("%s\n", s);
		break;
	case 'c':
		c = (char) va_arg(ap, int);
		printf("%c\n", c);
		break;
	case 'f':
		f = va_arg(ap, int);
		printf("%f\n", f);
		break;
	case 'i':
		i = va_arg(ap, int);
		printf("%d\n", i);
		break;
		}
	}
	va_end(ap);
	}
=======
{ /**VARIABLES **/
	int i, e;
	char *separador = "";

	va_list lista;

	types_t type[] = {
	{'c', printchar},
	{'s', printstr},
	{'i', printint},
	{'f', printfloat},
	{'\0', NULL}
			};
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
>>>>>>> 0210ee70f428c9e6b3ba4cf9094819525af144c7
