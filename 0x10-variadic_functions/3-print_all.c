#include <stdio.h>
#include <stdarg.h>
/**
*print_all - print
*@format: char
**/
void print_all(const char * const format, ...)
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
