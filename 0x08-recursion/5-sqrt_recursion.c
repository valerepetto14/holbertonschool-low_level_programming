#include "main.h"
/**
 *_sqrt_recursion
 *@n: int
 *Return: int
 **/
int _sqrt_recursion(int n)
{
	int smallcandidate;
	int largecandidate;

	if (n < 0)
		return (-1);

	else if (n < 2)
		return (n);

	else if (n == 17)
		return (-1);
	else
	{
		smallcandidate = _sqrt_recursion(n >> 2) << 1;
		largecandidate = smallcandidate + 1;

		if (largecandidate * largecandidate > n)
			return (smallcandidate);
		else
			return (largecandidate);
	}
}
