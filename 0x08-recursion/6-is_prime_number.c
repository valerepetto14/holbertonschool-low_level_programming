#include "main.h"
/**
* _prime - primo
* @y: number
* @x: number
* Return: int
**/
int  _prime(int y, int x)
{
	if (y % x == 0)
		return (0);

	if (x * x > y)
		return (1);

	return (_prime(y, x + 1));
}
/**
*is_prime_number - primos
*@n: int
*Return: int
**/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime(n, 2));
}
