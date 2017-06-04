#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];

int main(int argc, char const *argv[])
{
	int i, j, n, k, first = 1;
	memset(a, 0, sizeof(a));
	scanf("%d%d", &n, &k);
	for (i = 1; i <= k; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			if (j % i == 0)
			{
				a[j] = !a[j];
			}
		}
	}
	for (i = 1; i <= n; ++i)
	{
		if(a[i])
		{
			if (first)
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
}
