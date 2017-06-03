#include <stdio.h>
int main()
{
	double i;
	for(i=0.0000000000000001; i > 0; i += 0.0000000000000001)
	{
		;
	}
	printf("%.100lf\n%.100lf\n",i,i-1);
	return 0;
}