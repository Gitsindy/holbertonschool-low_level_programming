#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Entry point, use size 
 * *
 * *Return:0
 */
int main(int argc, char *argv[])
{
	printf ("size of a char: 1 byte%zd bytes\n", sizeof (char));
	printf ("Size of an int: 4 byte %zd bytes\n", sizeof (int));
	printf ("Size of a long int: 8 %zd bytes\n", sizeof (long));
	printf ("Size of a long long int: 8 %zd bytes\n", sizeof (long long));
	printf ("Size of a float: 4  %zd bytes\n", sizeof (float));
	return (0);
}
	 

