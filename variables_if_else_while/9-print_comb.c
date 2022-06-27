#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	int m =1;

	for (i=0;i<=9;i++)
	{
		putchar(m);
		m=m*i;
		
	}
	return (0) ;
}