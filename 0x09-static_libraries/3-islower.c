#include <ctype.h>

/**
 *_islower - ui
 *@c: c
 *Return: 1 if c
**/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
