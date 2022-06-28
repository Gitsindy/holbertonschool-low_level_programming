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
	while (myu < 91)
	{
		putchar(myu);
		myu = myu + 1;
		if (myu == 91)
		{
			putchar(' ');
			
			
		}
	}
	putchar('\n');
	return (0);
}
