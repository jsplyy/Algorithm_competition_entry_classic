#define LOCAL

#include <stdio.h>
#include <string.h>
int digital[10];

int main(int argc, char const *argv[])
{
	int T, i, N, k, d;

#ifdef LOCAL
freopen("e_3_3_data.in", "rb", stdin);
freopen("e_3_3_data.out", "wb", stdout);
#endif

	scanf("%d", &T);

	while(T)
	{
		scanf("%d",&N);
		i = 0;
		memset(digital, 0, sizeof(digital));

		while(N)
		{
			k = N;
			while(k)
			{
				d = k%10;
				digital[d] += 1;
				k = k/10;
			}
			N--;
		}
		for (i = 0; i < 10; ++i)
		{
			if (i==9)
			{
				printf("%d", digital[i]);
			}
			else
			{
				printf("%d ", digital[i]);
			}
			
		}
		printf("\n");		
		T--;

	}
	return 0;
}
