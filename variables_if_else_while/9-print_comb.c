#include <stdio.h>
/**
 * *main -  combinations of single-digit numbers.
 * *
 * * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)

	{
		putchar(i);
		putchar(',');
		if (i==58)
		{
			i='\0';
		}
		putchar(32);
		}
	putchar('\n');
	return (0);
}
