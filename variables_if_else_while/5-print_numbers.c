#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		if (number == 10)
		{
			number++;
		}
		printf("%d", number);
		number = number + 1;
	}
	return (0);
}
