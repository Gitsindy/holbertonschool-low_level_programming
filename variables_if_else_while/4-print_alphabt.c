#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char letras = 97;

	while (letras < 123)
	{
		if (letras == 101)
		{
			letras++;
		}
		if (letras == 113)
		{
			letras++;
		}

		putchar (letras);
		letras = letras + 1;
	}
	return (0);
}
