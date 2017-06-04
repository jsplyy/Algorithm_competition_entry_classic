#include <stdio.h>
#include <math.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	int i;
	for (i = 100; i < 1000; ++i)
	{
		if (i == floor(pow(i/100,3)) + floor(pow(i/10%10,3)) + floor(pow(i%10,3)))
		{
			printf("%d\n", i);
		}
		
	}

	printf("Time used = %.16f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}