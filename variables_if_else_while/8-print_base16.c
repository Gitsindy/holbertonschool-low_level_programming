#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
int main(void)
{
	
    char Hexa = 0;

	for ( Hexa = 0; Hexa < 16; Hexa++)
    {
        putchar(Hexa);
		Hexa = Hexa + 1;
        
	}
	putchar('\n');
	return (0);
}