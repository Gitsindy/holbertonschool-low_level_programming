#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		if (num == 10)
		{
			num++;
		}

	  putchar(num);
	  num= num + 1;	
	}
	return (0);
}