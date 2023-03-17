#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *description: 'get the last degit of number'
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is zero\n", n);
	}
	else
	{
		printf("Last digit of %d is %d less than 6 and not zero\n", n, ld);
	}
	return (0);
}
