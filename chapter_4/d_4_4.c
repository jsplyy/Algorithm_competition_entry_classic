#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
    int i, m;
    if (n <= 1)
    {
        return 0;
    }
    m = floor(sqrt(n) + 0.5);
    for (i = 2; i <= m; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n = 10;
    printf("%d\n", is_prime(n));
    return 0;
}