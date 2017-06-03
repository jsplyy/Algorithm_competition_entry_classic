#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n2, count = 0;
	long long n;
	scanf("%d", &n2);
	n = n2;
	while(n > 1)
	{
		if (n % 2 == 1)
		{
			n = n * 3 + 1;
		}
		else
		{
			n /= 2;
		}
		count ++;
	}
	printf("%d\n", count);
	return 0;
}