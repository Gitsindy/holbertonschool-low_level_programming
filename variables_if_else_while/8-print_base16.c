#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	char i = 'a';
    char Number = 'A';

	while (Number < 'F')
	{
		putchar(Number);
		Number = Number + 1;
        for (i = 'a'; i < 'f'; i++)
        {
            putchar(i);
		    i = i + 1;
        }
        
	}
	putchar('\n');
	return (0);
}