#include <stdio.h>
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)

	{

		putchar(i);
		putchar(32);
		if (i == 56)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}