#include <stdio.h>
#define MAXN 105
int a[MAXN];

int main(int argc, char const *argv[])
{
	int i, x, n = 0;
	while(scanf("%d", &x) == 1)
	{
		a[n++] = x;
	}
	for (i = n-1; i >= 1; i--)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);
	return 0;
}
