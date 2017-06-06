#define LOCAL

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, q = 1;

#ifdef LOCAL
	freopen("data.in", "rb", stdin);
	freopen("data.out", "wb", stdout);
#endif

	while((c = getchar()) != EOF)
	{
		if (c == '"')
		{
			printf("%s", q ? "``" : "''");
			q = !q;
		}
		else
		{
			printf("%c", c);
		}
	}
	return 0;
}