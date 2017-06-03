#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d", &n);
	m = (n%10)*100 + (n/10%10)*10 + (n/100);
	printf("%3d\n", m);
	return 0;
}