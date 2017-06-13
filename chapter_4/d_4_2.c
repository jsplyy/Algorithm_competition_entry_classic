/* intternal value overflow , read d_4_2.c for correct answer. */

#include <stdio.h>



long long C(int n, int m)
{
    int i;
    long long ans = 1;
    if (m < n -m)
    {
        m = n -m;
    }
    for (i = m + 1; i <= n; ++i)
    {
        ans *= i;
    }
    for (i = 1; i <= n - m; ++i)
    {
        ans /= i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int m = 12, n = 25;

    printf("%ld\n", C(n, m));
    return 0;
}