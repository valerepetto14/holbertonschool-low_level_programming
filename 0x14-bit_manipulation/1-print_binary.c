#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_binary - print binary
 *@n: unsigned long int
 **/
void print_binary(unsigned long int n)
{
	if (n > 1)

	print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
