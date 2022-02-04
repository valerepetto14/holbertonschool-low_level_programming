#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - Entry point
 * Return: Always 1 (Success)
  **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		 printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
