#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len;
	int len2;
	int num = INT_MAX;
	int num_2 = INT_MIN;
	unsigned int ui;
	ui = (unsigned int)INT_MAX + 1024;
	printf("%d\n", num_2);
	_printf("%d\n", num_2); 
   	 _printf("hola%\n");
    	printf("%d\n", num);
	_printf("%d\n", num);
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("estuve %d veces\n", 200);
	printf("hola %d veces\n", 20);

	printf("%d\n", num_2);
	_printf("%d\n", num_2); 
	_printf("hola%\n");
	printf("%d\n", num);
	_printf("%d\n", num);
	_printf("Let's try to %%d printf a simple sentence.\n", 1024);
	_printf("Let's try to %d printf a simple sentence.\n", 213123);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned:[%u]\n", ui);
	_printf("estuve %d veces a punto de morir\n", 23);
	printf("estuve %d veces a punto de morir\n", 23);
	return (0);
}
