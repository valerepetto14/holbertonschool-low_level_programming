#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
* linear_search - printea
* @array: int
* @size: size_t
* @value: int
* Return: Write a function that searches using the Linear search algorithm
**/
int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	if (size == 0)
	{
		return (-1);
	}
	for (; iter < size; iter++)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, value);
		if (array[iter] == value)
		{
			return (iter);
		}
	}
	return (-1);
}
