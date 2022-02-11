#include "main.h"
/**
 * swap_int - swap
 * @a: *a
 * @b: *b
**/
void swap_int(int *a, int *b)
{
	int c = 0;
	int d = 0;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
