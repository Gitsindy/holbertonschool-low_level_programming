#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char letras = 65;

	if (letras < 122)
	{
		putchar(letras);
		letras = letras + 1;
	}
	else {
	    putchar(letras);
	}
	return (0);
}
