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
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	k = n % 10;

	if (k > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, k);
	else if (k < 5 && k != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, k);
	else
		printf("Last digit of %i is 0 and is 0\n ", n);
	return (0);
}
