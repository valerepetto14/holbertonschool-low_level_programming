#include "main.h"
/**
 * factorial - factorial de un numero
 * @n: int
 * Return: int
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * (factorial(n - 1)));
}
