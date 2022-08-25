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
int binary_search(int *array, size_t size, int value)
{
low = 0;
high = size - 1;
mid = (low+high)/2;
while (low <= high) {
	if(array[mid] < key)
		low = mid + 1;
	else if (array[mid] == key)
	{
		printf("%d found at location %d.n", key, mid+1);
		break;
	}
	else
		{
			high = mid - 1;
			mid = (low + high)/2;
		}
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;

}