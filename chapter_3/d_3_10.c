#include <stdio.h>
#include <string.h>

#define maxn 105

int less(const char* s, int p, int q)
{
	int i;
	int n = strlen(s);
	for (i = 0; i < n; ++i)
	{
		if (s[(p+i)%n] != s[(q+i)%n])
		{
			return s[(p+i)%n] < s[(q+i)%n];

		}

	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int T;
	int i, ans, n;
	char s[maxn];
	scanf("%d", &T);
	while(T--)
	{
		scanf("%s", s);
		ans = 0;
		n = strlen(s);
		for (i = 1; i < n; ++i)
		{
			if (less(s, i, ans))
			{
				ans = i;
			}
		}
		for (i = 0; i < n; ++i)
		{
			putchar(s[(i+ans)%n]);
		}
		putchar('\n');
	}
	return 0;
}