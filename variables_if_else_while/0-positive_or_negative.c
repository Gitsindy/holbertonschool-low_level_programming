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
	 	if ( n > 0 )
	 { 
	   printf ( "n is positive" );
	 }
	 	else if ( n < 0 )
	 {
		printf (" n is negative" );
	 }
	 	else{
       printf ( "n is zero" );
	 }
	
	return (0);
}
