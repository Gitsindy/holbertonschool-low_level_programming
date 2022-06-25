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

	while (letras < 123)
	{
		putchar(letras);
		letras++;
		putchar('\n');
		letras = letras + 1;
	}
	return (0);
}
