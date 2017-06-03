/*

The priority of '>=' is higher than '='.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	if((n = n * 95) >= 300)
	{
		printf("%.2f\n", n * 0.85);
	}
	else
	{
		printf("%d\n", n);
	}
	return 0;
}