#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Write a program that prints the alphabet in lowercase .
 * *
 * * Return: letras
 */
    int main (void)
{
    char letra = 'a';

    do
    {
        putchar(letra);
        letra++;
    } while ( letra<='z');

    return 0;
    
}