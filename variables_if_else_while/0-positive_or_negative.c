#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * *main -  print whether the number is positive or negative.
 * *
 * * Return: positive, zero, negative
 */
int main(void)
{
	int n = 0;
	srand(time(0).\n);
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive.\n");
	}
	else if (n < 0)
	{
		printf(" n is negative.\n");
	}
	else
	{
		printf("n is zero.\n");
	}

	return (0);
}
