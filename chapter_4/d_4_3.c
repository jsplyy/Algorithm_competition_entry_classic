/* n != 1 and could not be too long. */

#include <stdio.h>

int is_prime(int n)
{
    int i;
    for (i = 2; i * i <= n; ++i)
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