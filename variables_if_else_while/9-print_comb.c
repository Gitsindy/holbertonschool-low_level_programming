#include <stdio.h>
int main(void)
{
	int i;

	for (i = 48 ; i <= 57; i++)

	{
		putchar(i);
		if (58==32)
		{
			i++;
		}
		putchar(',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}