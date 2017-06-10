#define LOCAL

#include <stdio.h>
#include <string.h>
char s[80];

int main(int argc, char const *argv[])
{
	int T, i;
	int sum = 0, conti;

#ifdef LOCAL
freopen("e_3_1_data.in", "rb", stdin);
freopen("e_3_1_data.out", "wb", stdout);
#endif

	scanf("%d", &T);

	while(T)
	{
		memset(s,0,sizeof(s));

		scanf("%s",s);
		sum = 0; conti = 0; i = 0;
		//printf("%s\n",s);

		while(s[i])
		{
			if (s[i]=='O')
			{
				conti++;
				sum += conti;
			}
			if (s[i] == 'X')
			{
				conti = 0;
			}
			i++;
		}
		printf("%d\n", sum);
		T--;
	}
	return 0;
}
