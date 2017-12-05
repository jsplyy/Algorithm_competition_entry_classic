#include <stdio.h>
#include <string.h>

// #define maxn  100005;
int last, cur, next[100005];
char s[100005];

int main(int argc, char const *argv[])
{
    while(scanf("%s", s+1) == 1)
    {
        int n = strlen(s+1);
        last = cur = 0;
        next[0] = 0;

        for (int i = 0; i <= n; ++i)
        {
            char ch = s[i];
            if (ch == '[')
            {
                cur = 0;
            }
            else if (ch == ']')
            {
                cur = last; 
            }
            else
            {
                next[i] = next[cur];
                next[cur] = i;
                if (cur == last)
                {
                    last = i;
                }
                cur = i;
            }
        }
        for (int i = next[0]; i != 0; i = next[i])
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}