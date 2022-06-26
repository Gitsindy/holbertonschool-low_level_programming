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

	while (letras <= 122)
	{
		if (letras == 101)
		{
			letras++;
		}
		if (letras == 113)
		{
			letras++;
		}

		putchar(letras,'\n');
		letras = letras + 1;
	}
	return (0);
}
