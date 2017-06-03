/*

Gregorian calendar provisions:
	the year is the whole number, it must be a multiple of 400 is leap year;
	not 400 times the century, even if the multiples of 4 is not a leap year.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &year);

	if (year % 100 == 0 && year %400 == 0)
	{
		printf("yes\n");
	}
	else
	{
		if (year %4 == 0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}