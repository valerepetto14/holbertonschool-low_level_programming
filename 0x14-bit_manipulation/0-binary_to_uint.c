#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *binary_to_uint - convert
 *@b: string
 *Return: unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	int len, iter;
	unsigned int retorno = 0, multi = 1;

	if (!b)
		return (0);
	len = strlen(b);
	for (iter = len - 1; iter >= 0; iter--)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);
		if (b[iter] == '1')
			retorno += multi;
	multi *= 2;
	}
	return (retorno);
}
