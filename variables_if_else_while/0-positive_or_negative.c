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
	printf("is positive:%d\n",n, rand());
	printf("is negative:%d\n",n, rand());
	printf("is zero:%d\n",n, rand());
	return (0);
}
