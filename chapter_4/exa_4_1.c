#define LOCAL

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

char s1[126], s2[126];

int main(int argc, char const *argv[])
{
    int i, len;

    #ifdef LOCAL
        freopen("exa_4_1_data.in", "rb", stdin);
        freopen("exa_4_1_data.out", "wb", stdout);
    #endif

    memset(s1, 0, sizeof(s1));
    memset(s2, 0, sizeof(s2));

    while(scanf("%s", s1) != EOF)
    {
        scanf("%s", s2);

        len = strlen(s1);
        for (i = 0; i < len; ++i)
        {
            s1[s1[i] - 65 + 100] ++;
            s2[s2[i] - 65 + 100] ++;
        }

        qsort(s1+100, 26, sizeof(char), cmp);
        qsort(s2+100, 26, sizeof(char), cmp);

        for (i = 0; i < 26; ++i)
        {
            if (s1[100+i] != s2[100+i])
            {
                printf("NO\n");
                break;
            }
        }
        if (i == 26)
        {
            printf("YES\n");
        }

        memset(s1, 0, sizeof(s1));
        memset(s2, 0, sizeof(s2));
    }
    return 0;
}