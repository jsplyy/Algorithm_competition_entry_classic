#define LOCAL

#include <stdio.h>

char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(int argc, char const *argv[])
{
	int i, c;
#ifdef LOCAL
	freopen("d_3_6_data.in", "rb", stdin);
	freopen("d_3_6_data.out", "wb", stdout);
#endif
	while((c = getchar()) != EOF)
	{
		for (i = 1; s[i] && s[i] != c; i++);
		if (s[i])
		{
			putchar(s[i-1]);
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}