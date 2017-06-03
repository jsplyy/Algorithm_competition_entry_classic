/*
	The parameter unit is radian in math.h.
	1 degree = PI / 180 radian.
	M_PI is defined in math.h.
*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("sin(n)=%.3f\n", sin(n*M_PI/180));
	printf("cos(n)=%.3f\n", cos(n*M_PI/180));
	return 0;
}