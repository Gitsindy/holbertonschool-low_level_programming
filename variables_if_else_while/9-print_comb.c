#include <stdio.h>
int main(void)
{
	int i;

	for (i = 48 ; i <= 57; i++)

	{
		putchar(i);
		putchar(',');
		if (i==58)
		{
			i++;
		}
		
		putchar(32);
	}
	putchar('\n');
	return (0);
}