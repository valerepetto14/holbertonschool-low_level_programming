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

	while (a[iter] != '\0')
	{
		if (a[iter + 1] == '\0')
			printf("%d", a[iter])
		else
		printf("%d, ", a[iter]);

		iter++;
	}

}
