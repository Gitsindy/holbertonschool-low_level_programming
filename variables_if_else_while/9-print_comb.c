#include <stdio.h>
int main(void)
{
	int i;

	for (i = 48 ; i <= 58; i++)

	{
		putchar(i);
		if (i == 47)
		{
			i++;
		}
		putchar(',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}