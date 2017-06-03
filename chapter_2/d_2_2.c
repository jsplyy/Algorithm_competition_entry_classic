#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a, b, m, n;

	for (a = 1; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			n = a*1100 + b*11;
			m = floor(sqrt(n)+0.5);
			if (m*m == n)
			{
				printf("%d\n", n);
			}
		}
	}
	return 0;
}