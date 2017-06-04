#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	int num = 0;
	while(scanf("%d%d%d", &a, &b, &c)==3 && a != 0 && b != 0 && c != 0)
	{
		num++;
		printf("Case %d: %.*f\n", num, c, a*1.0/b);

	}
	return 0;
}