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
	srand(time(0))"%d\n";
	n = rand() - RAND_MAX / 2;
	printf(" %d is positive:%d\n" ,n, rand());
	printf("is negative %d:%d\n" ,n, rand());
	printf("is zero %d:%d\n" ,n, rand());
	return (0);
}
