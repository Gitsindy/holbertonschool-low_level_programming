#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * *main -  print whether the number is bigger or minor.
 * *
 * * Return: 0
 */
int main(void)
{
	int n = 0;
	int m = 8;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is  than 5\n", n, m);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d  and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of -%d is %d and is less than 6 and not 0\n", n, m);
	}

	return (0);
}