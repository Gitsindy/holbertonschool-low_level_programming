#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	int number;
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (number == 10)
		{
			number++;
		}
		number = i + number;
	}
	printf("\n%d\n", number);
	return (0);
}
