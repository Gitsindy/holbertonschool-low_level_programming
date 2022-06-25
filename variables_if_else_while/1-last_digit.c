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
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (n == 0)
	{
		printf("Last digit of 980 is 0 and is 0\n");
	}
	else
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
	}

	return (0);
}