#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n = 0;
	int s = 1;
	int i = 0;

	for (i = 0; n <= 9; i++)
	{
		s = s * i;
		putchar(s);
	}
	return (0) ;
}