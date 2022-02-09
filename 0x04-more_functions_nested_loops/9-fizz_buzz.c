#include <stdio.h>
/**
 *  main - nashe
 *  Return: 1
 **/
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
	if ((a % 3) == 0 && (a % 5) == 0)
		printf("FizzBuzz");
	if ((a % 3) == 3)
		printf("Fizz");
	if ((a % 5) == 5)
		printf("Buzz");
	else
		printf("%i", a);
	}
	return (0);
}
