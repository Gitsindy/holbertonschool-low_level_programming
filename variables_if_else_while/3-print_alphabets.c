#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char min = 97;
	char myu = 65;

	while (min <= 122)
	{
		putchar(min);
		min = min + 1;
	}
	while (myu <= 90)
	{
		putchar(myu );
		myu = myu + 1;
	}
	return (0);
}
