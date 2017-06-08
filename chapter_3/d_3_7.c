#define LOCAL

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char *msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrord palindrome"};

char r(char ch)
{
	if(isalpha(ch))
		return rev[ch-'A'];
	return rev[ch - '0' + 25];
}

int main(int argc, char const *argv[])
{
	char s[30];
	int len, i, p, m;

	#ifdef LOCAL
		freopen("d_3_7_data.in", "rb", stdin);
		freopen("d_3_7_data.out", "wb", stdout);
	#endif

	while(scanf("%s", s) == 1)
	{
		len = strlen(s);
		p = 1; m = 1;
		for(i = 0; i < (len+1)/2; i++)
		{
			if (s[i] != s[len-1-i])
			{
				p = 0;
			}
			if (r(s[i]) != s[len-1-i])
			{
				m = 0;
			}
		}
		printf("%s -- is %s .\n\n", s, msg[m*2+p]);
	}
	return 0;
}