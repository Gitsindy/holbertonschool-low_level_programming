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
    
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("98 is positive\n");
	}
	else if (n < 0)
	{
		printf("-98 is negative\n");
	}
	else
	{
		printf("0 is zero\n");
	}

	return (0);
}
