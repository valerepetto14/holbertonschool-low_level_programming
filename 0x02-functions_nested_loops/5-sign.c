#include "main.h"
/**
 *  print_Sign - imprime el signo
 *@n: n
 *Return:0
 **/
int print_sign(int n)
{
	if (n < 0)
	{
	 _putchar('-' + '0');
	 return (-1);
	}
	else if (n > 0)
	{
		_putchar('+' + '0');
		return (1);
	}
	else
	{
	  _puthcar(0)
	  return (0);	  
	}
}
