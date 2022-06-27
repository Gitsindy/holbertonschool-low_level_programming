#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n = 9, i, s = 1;

	for (i = 1; i <= n; i++)
	{
		s = s * i;
		putchar(s);
	}
	return (0) ;
}