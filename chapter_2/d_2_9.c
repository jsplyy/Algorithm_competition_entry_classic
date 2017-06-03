#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, n = 1, min, max, s = 0;
	scanf("%d", &x);
	s = min = max = x;
	while(scanf("%d", &x) == 1)
	{
		s += x;
		if (x < min)
		{
			min = x;
		}
		if (x > max)
		{
			max = x;
		}
		n++;
	}
	printf("%d %d %.3f\n", min, max, (double)s/n);
	return 0;
}