/*

Mathematically related: the nature of the difference series

Summation formula for the former n terms：Sn = (a1 + an) * n / 2

Derived by：ak+al=am+an
prove:
ak+al=a1+(k-1)d+a1+(l-1)d=2a1+(k+l-2)d
am+an=a1+(m-1)d+a1+(n-1)d=2a1+(m+n-2)d
So, the equation holds

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d\n", (1+n)*n/2);
	return 0;
}