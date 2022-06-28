#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char min=97,M=65;

	while (min<122)
	{  
		putchar(min);
		min = min + 1;
		if (M<90)
		{
			putchar(M);
	    M = M +1;
	}
		}
		
		
	return (0);
}
