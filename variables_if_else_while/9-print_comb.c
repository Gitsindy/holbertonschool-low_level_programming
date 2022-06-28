#include <stdio.h>
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)

	{

		putchar(i);
		putchar(',');
		putchar(32);
		if (i ==58 )
		{
			i--;
		}
	}
	putchar('\n');
	return (0);
}