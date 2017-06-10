#define LOCAL

#include <stdio.h>
#include <string.h>
char s[80];

int verify(int m)
{
	int i, k;

	for (i = m; i < strlen(s); ++i)
	{
		if (s[i] != s[i%m])
		{
			return 0;
		}
	}
	return 1;

}


int main(int argc, char const *argv[])
{
	int T, t, k, i;

#ifdef LOCAL
freopen("e_3_4_data.in", "rb", stdin);
freopen("e_3_4_data.out", "wb", stdout);
#endif

	scanf("%d", &T);

	while(T)
	{
		memset(s, 0, sizeof(s));
		scanf("%s", s);
		k = strlen(s);
		for (i = 1; i <= k; ++i)
		{
			if (k % i != 0)
			{
				continue;
			}
			if (verify(i))
			{
				break;
			}
		}
		if (T == 1)
		{
			printf("%d\n", i);
		}
		else
		{
			printf("%d\n\n", i);
		}
		
		T--;
	}
	return 0;
}
