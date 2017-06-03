#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a  = 0, b = 0, c= 1;
	printf("a&&b||c = %d\n", a&&b||c);
	printf("(a&&b)||c = %d\n", (a&&b)||c);
	printf("a&&(b||c) = %d\n", a&&(b||c));
	return 0;
}