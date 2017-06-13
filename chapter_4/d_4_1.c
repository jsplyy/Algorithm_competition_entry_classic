/* intternal value overflow , read d_4_2.c for correct answer. */

#include <stdio.h>

long long factorial(int n)
{
    long long m = 1;
    int i;
    for (i = 1; i <= n; ++i)
    {
        m *= i;
    }
    return m;
}

long long C(int n, int m)
{
    return factorial(n) / (factorial(m) * factorial(n-m));
}

int main(int argc, char const *argv[])
{
    int m = 12, n = 25;

    printf("%ld\n", C(n, m));
    return 0;
}