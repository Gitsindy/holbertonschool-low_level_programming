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
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Number %d: %d\n",n, rand());
	return (0);
}