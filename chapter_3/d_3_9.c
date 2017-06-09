#include <stdio.h>
#include <string.h>
#define maxn 100005
int ans[maxn];

int main(int argc, char const *argv[])
{
	int T, n;
	int m, x, y;
	memset(ans, 0, sizeof(ans));
	for (m = 1; m < maxn; ++m)
	{
		x = m; y = m;
		while(x > 0)
		{
			y += x %10;
			x /= 10;
		}
		if (ans[y] == 0 || m < ans[y])
		{
			ans[y] = m;
		}
	}
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
	return 0;
}
