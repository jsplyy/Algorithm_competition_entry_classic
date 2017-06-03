#include <stdio.h>

int intMax()
{
	int m = 0, n = 0;
	while(n <= m)
	{
		n = m++;
			
	}
}

int intMin()
{
	int m = 0, n = 0;
	while( n >= m)
	{
		n = m--;
	}
}

int main(int argc, char const *argv[])
{
	printf("int max = %d\n", intMax());
	printf("int min = %d\n", intMin());
	return 0;
}