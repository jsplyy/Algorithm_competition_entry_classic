#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, n, s = 0;
	int factorial = 1;
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
	{
		factorial = 1;
		for (j = 1; j <= i; ++j)
		{
			factorial *= j;
		}
		s += factorial;
	}
	printf("%d\n", s % 1000000);
	return 0;
}