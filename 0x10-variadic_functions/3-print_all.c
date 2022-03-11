#include <stdio.h>
#include <stdarg.h>
void printchar(char *c);
void printstr(char *is);
void printint(char *i);
void printfloat(char *f);

/**
*print_all - print
*@format: char
**/
void print_all(const char * const format, ...)
{

	va_list ap;
	char *form = "";

	*form = *format;

	va_start(ap, format);
	while (*form)
	{

	}
	va_end(ap);
}

/**
 * printchar - p
 *@c: c
**/
void printchar(char *c)
{
	printf("%c", c);
}
/**
*get_op_func - dale
*@s:char
*Return: int
**/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
/**
 *printstr - p
 *@s: c
 **/
void printstr(char *s)
{
	printf("%s", s);
}
/**
 *printint - p
 *@i: i
 **/
void printint(char *i)
{
	printf("%i", i);
}
/**
 *printfloat - p
 *@f: f
 **/
void printfloat(char *f)
{
	printf("%f", f);
}
