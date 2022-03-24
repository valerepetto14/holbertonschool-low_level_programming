#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_binary - convert
 *@n: unsigned long int
 **/
void print_binary(unsigned long int n)
{
	if(n / 2)
		print_binary(n / 2);
		printf("%u", n % 2);
	else
		printf("%u", n % 2);
}
