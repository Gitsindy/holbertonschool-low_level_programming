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

	while ((letras >='a' && letras <='z')||(letras >='A'&& letras <='Z' ))
	{
		putchar(letras);
		letras = letras + 1;
	}
	return (0);
}
