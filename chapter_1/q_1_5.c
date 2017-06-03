#include <stdio.h>

int main(int argc, char const *argv[])
{
	int y = 0;
	if (0) if(1); else y++;
	if (y)
	{
		printf("outside\n");
	}
	else
	{
		printf("internal\n");
	}
	return 0;
}