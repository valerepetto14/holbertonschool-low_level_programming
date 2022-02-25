#include <stdio.h>
#include <stdlib.h>
/**
 *  *  main - ns
 *   *  @argc: int
 *    *  @argv: array
 *     *  Return: 0
 *     **/
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
