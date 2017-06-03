#include <stdio.h>

int main(int argc, char const *argv[])
{
	float f;
	scanf("%f",&f);
	printf("%.3f\n", 5*(f-32)/9.0);
	return 0;
}