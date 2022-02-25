#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *  *  main - ns
 *   *  @argc: int
 *    *  @argv: array
 *     *  Return: 0
 *     **/
int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;
	char *arr;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
		{
			for (i = 1; i < argc; i++)
			{
				arr = argv[i];
				for (j = 0; arr[j] != '\0'; j++)
				{
					if (isdigit(arr[j]) == 0)
					{
						printf("Error\n");
						return (1);
					}
				}
				res += atoi(argv[i]);
			}
			printf("%d\n", res);
		}
	return (0);
}
