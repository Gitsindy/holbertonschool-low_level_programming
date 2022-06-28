#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{

	char Hexa = 'a';
	char Num = 48;
	while (Num <= 48)
	{
		putchar(Num);
		Num = Num + 1;
	}
	while (Hexa <= 'f')
	{
		putchar(Hexa);
		Hexa = Hexa + 1;
	}

	putchar('\n');
	return (0);
}