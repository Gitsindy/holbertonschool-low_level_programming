#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char letras;

	while ((letras>97 && letras<122) && (letras>65 && letras<90))
	{  
		putchar(letras);
		letras = letras + 1;
	}
	return (0);
}
