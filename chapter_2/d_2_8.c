#include <stdio.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	const int MOD = 1000000;
	int i, j, n, s = 0;
	int factorial;
	scanf("%d", &n);
	if (n > 25)
	{
		n = 25;
	}
	for (i = 1; i <= n; ++i)
	{
		factorial = 1;
		for (j = 1; j <= i; ++j)
		{
			factorial = (factorial * j % MOD);
		}
		s = (s + factorial) % MOD;
	}
	printf("%d\n", s);
	printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}