//uncorrect

#include <stdio.h>

void swap(int a, int b)
{
    int t;
    t = a;  a = b;  b = t;
}

int main(int argc, char const *argv[])
{
    int a = 3, b = 4;
    swap(3, 4);
    printf("%d %d\n", a, b);
    return 0;
}