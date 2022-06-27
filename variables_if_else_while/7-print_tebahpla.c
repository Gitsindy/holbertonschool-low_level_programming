#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char letra = 'z';

	do {
		putchar(letra);
		letra++;
	} while (letra >= 'a');
	putchar('\n');
	return (0);
}