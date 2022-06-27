#include <stdio.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	int num;

	for (num= 0; num < 10; num++)
	{
		if (num == 10 )
		{
			num++;
		}

	  putchar(num);
	  num= num + 1;	
	}
	return (0);
}