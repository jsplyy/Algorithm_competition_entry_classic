#include <stdio.h>

void repeatPrintChar(char c, int n)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		putchar(c);
	}
}

int main(int argc, char const *argv[])
{
	int i, n;
	while(scanf("%d", &n))
	{
		for (i = n; i > 0; i--)
		{
			repeatPrintChar(' ', n-i);
			repeatPrintChar('#', 2*i-1);
			printf("\n");
		}
		
	}
	return 0;
}