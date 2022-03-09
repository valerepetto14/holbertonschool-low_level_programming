#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
*array_iterator - iterar
*@array: int
*@size: size_t
*@action: int
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int j = size;

	if (j >= 0 && array != NULL && action != NULL)
	{
		for (i = 0; i < j; i++)
			action(array[i]);
	}
	else
		return;
}
