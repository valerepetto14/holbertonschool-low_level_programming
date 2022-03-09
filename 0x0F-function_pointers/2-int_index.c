#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - index
 *@array: array
 *@size: size
 *@cmp: pointer function
 *Return: int
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i <= size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
