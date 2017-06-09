#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 1000 + 10

int main(int argc, char const *argv[])
{
	char s[maxn];
	scanf("%s", s);
	int i, total = 0;
	for (i = 0; i < strlen(s); ++i)
	{
		if (s[i] == '1')
		{
			total++;
		}
	}
	printf("%d\n", total);
	return 0;
}