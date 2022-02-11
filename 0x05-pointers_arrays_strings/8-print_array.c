#include "main.h"
#include "stdio.h"
/**
 * print_array - array
 * @a:1
 * @n:1
 **/
void print_array(int *a, int n)
{
	int iter = 0;

	while (iter < n)
	{
		if (iter == n - 1)
			printf("%d", a[iter]);
		else
		printf("%d, ", a[iter]);

		iter++;
	}

}
