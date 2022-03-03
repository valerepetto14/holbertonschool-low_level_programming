#include "main.h"
#include <stdlib.h>
/**
 *array_range - malloc
 *@min: int
 *@max: int
 *Return: int
 **/
int *array_range(int min, int max)
{
	int dif = 0, i = 0;
	int *array;

	if (min > max)
		return (NULL);

	dif = max - min;

	array = malloc((dif + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (; min <= max; min++, i++)
		array[i] = min;
	return (array);
}
