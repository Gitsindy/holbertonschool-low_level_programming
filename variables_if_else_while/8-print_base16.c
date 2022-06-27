#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char Hexadecimal = 'A';

	while (Hexadecimal < 'f')
	{
		putchar(Hexadecimal);
		Hexadecimal = Hexadecimal + 1;
	}
	putchar('\n');
	return (0);
}