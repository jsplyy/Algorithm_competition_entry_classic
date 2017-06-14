#define LOCAL
#include <cstdio>
#include <algorithm>

using namespace std;
const int maxn = 10000;
int d[maxn];

int main(int argc, char const *argv[])
{
	int N, q, x;
	int case_number=0;

#ifdef LOCAL
	freopen("exa_5_1_data.in", "rb", stdin);
	freopen("exa_5_1_data.out", "wb", stdout);
#endif
	while(scanf("%d%d", &N,&q) == 2 && N)
	{
		printf("CASE# %d:\n", ++case_number);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &d[i]);
		}
		sort(d, d+N);
		while(q)
		{
			scanf("%d", &x);
			int p = lower_bound(d, d+N, x) - d;
			if (d[p] == x)
			{
				printf("%d found at %d\n", x, p+1);
			}
			else
			{
				printf("%d not found\n", x);
			}
			q--;
		}
	}
	return 0;
}