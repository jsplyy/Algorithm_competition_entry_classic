#include <stdio.h>

void onlyOne(int num, int *sum, int *mul)
{
	int i, j, k;
	i = num/100; j = num/10%10; k = num%10;
	*sum += i +j + k;
	*mul *= i * j * k;
}

int main(int argc, char const *argv[])
{
	int m, n, k;
	int sum = 0, mul = 1;
	for (m = 123; m < 350; ++m)
	{
		n = m*2;
		k = m*3;

		sum = 0; mul = 1;
		onlyOne(m, &sum, &mul);
		onlyOne(n, &sum, &mul);
		onlyOne(k, &sum, &mul);

		if (sum == 45 && mul == 362880)
		{
			printf("%d %d %d\n", m, n, k);
		}
	}
	return 0;
}