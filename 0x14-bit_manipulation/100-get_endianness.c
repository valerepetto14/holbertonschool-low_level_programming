#include "main.h"
/**
 *get_endianness - get
 *Return: 0 if  bif or 1 is little
 **/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (*char)&i;

	if (*c)
		return 0
	else
		return 1
}
