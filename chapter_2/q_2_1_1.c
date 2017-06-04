#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		printf("%d\n", 2*i);
	}
	return 0;
}