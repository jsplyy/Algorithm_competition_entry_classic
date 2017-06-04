/*
	Operator precedence: % == && 
	依据的理论,在中国称之为孙子定理,国外的书籍称之为中国剩余定理. 
	物不知其数问题
	<<孙子算经>> 原题为："今有物不知其数,三三数之二,五五数之三,七七数之二,问物几何?"
	明朝数学家程大位《算法统宗》三人同行七十稀,五树梅花甘一枝,七子团圆正半月,除百零五便得知.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int r3, r5, r7;
	int i, num = 0, ans = 0;
	while(scanf("%d%d%d", &r3, &r5, &r7) != EOF)
	{
		ans = 0;	num ++;
		for (i = 11; i < 100; ++i)
		{
			if (i%3==r3 && i%5==r5 && i%7== r7)
			{
				printf("Case %d: %d\n", num, i);
				ans = 1;
			}
		}
		if(!ans)
		{
			printf("Case %d: No answer\n", num);
		}
		
	}

	return 0;
}