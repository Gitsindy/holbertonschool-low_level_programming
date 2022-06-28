#include <stdio.h>
int main(void)
{
	int i;
	int m =1;
	int op;

	for (i=48;i<=58;i++)
	{
		if (i==47)
		{
			i++;
		}
		
		putchar(op);
		op = m * i;
		putchar(',');
		putchar(32);
		
		
		
	}
	putchar('\n');
	return (0) ;
}