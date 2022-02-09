#include "main.h"
/**
 ** _isupper - check the code.
 ** @c: int
 ** Return: Always 0.
 **/
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			break;
			return (1);
		}

		else
			return (0);
	}
	return (0);
}
