#include <stdio.h>
int main(void)
{
	int i;

	for (i = 48 ; i <= 57; i++)

	{
		putchar(i);
		putchar(',');
		putchar(57-',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}