#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n, m;
	float sum = 0;
	while(scanf("%d%d", &n, &m) && m!= 0 && n != 0)
	{
		sum = 0;
		for (i = n; i <= m; ++i)
		{
			sum += 1.0/(i*i);
		}
		printf("Case 1: %.5f\n", sum);
	}

	return 0;
}