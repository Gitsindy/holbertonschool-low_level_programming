#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point, use size
 *
 *Return: 0
 */
int main(void)
{
	printf("size of a char: 1 byte\n", sizeof(char));
	printf("Size of an int: 4 byte\n", sizeof(int));
	printf("Size of a long int: 8 byte\n", sizeof(long));
	printf("Size of a long long int: 8 byte\n", sizeof(long long));
	printf("Size of a float: 4 byte\n", sizeof(float));
	return (0);
}
