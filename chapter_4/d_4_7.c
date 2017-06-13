#include <stdio.h>

int sum(int a[])
{
    int ans = 0;
    int i;
    for (i = 0; i < sizeof(a); ++i)
    {
        ans += a[i];
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5};
    printf("%d\n", sum(a));
    return 0;
}