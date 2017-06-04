#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n;
	scanf("%d", &n);
	for (i = 2; i <= 2*n; i=i+2)
	{
		printf("%d\n", i);
	}
	return 0;
}