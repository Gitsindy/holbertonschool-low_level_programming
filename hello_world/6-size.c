#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point, use size
 *
 *Return: 0
 */
int main(void)
{
	printf("size of a char: %d byte\n", sizeof(char));
	printf("Size of an int: %d byte\n", sizeof(int));
	printf("Size of a long int: %d byte\n", sizeof(long));
	printf("Size of a long long int: %d byte\n", sizeof(long long));
	printf("Size of a float: %d byte\n", sizeof(float));
	return (0);
}
