#define LOCAL

#include <stdio.h>
#include <string.h>
char s[80];

int addNumber(char *s, int *j)
{
	int i=1,n=0;
	while(s[i]>='0' && s[i]<='9')
	{
		n = n * 10 + s[i] - 48;
		i++;
	}
	*j = i-1;
	return (n)?n:1;


}

int main(int argc, char const *argv[])
{
	int T, i, j,n;
	int organic[4];
	double sum;

#ifdef LOCAL
freopen("e_3_2_data.in", "rb", stdin);
freopen("e_3_2_data.out", "wb", stdout);
#endif

	scanf("%d", &T);

	while(T)
	{
		memset(s,0,sizeof(s));
		memset(organic, 0, sizeof(organic));
		scanf("%s",s);
		i = 0;

		while(s[i])
		{
			switch(s[i])
			{
				case 'C':n=addNumber(&s[i],&j);organic[0]+=n;break;
				case 'H':n=addNumber(&s[i],&j);organic[1]+=n;break;
				case 'O':n=addNumber(&s[i],&j);organic[2]+=n;break;
				case 'N':n=addNumber(&s[i],&j);organic[3]+=n;break;
			}
			i = i + 1 + j;
		}
		sum = 12.01 * organic[0] + 1.008 * organic[1] + 16.0 * organic[2] + 14.01 * organic[3];
		printf("%.3f\n", sum);
		T--;
	}
	return 0;
}
