#include <stdio.h>

int sum_left_closed1(int* begin, int* end)
{
    int n = end - begin;
    int i, ans = 0;
    for (i = 0; i < n; ++i)
    {
        ans += begin[i];
    }
    return ans;
}

int sum_left_closed2(int*begin, int* end)
{
    int* p = begin;
    int ans = 0;
    for (p = begin; p != end; ++p)
    {
        ans += *p;
    }
    return ans;

}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5};
    
    printf("%d\n", sum_left_closed1(a,a+5));
    printf("%d\n", sum_left_closed2(a,a+5));
    return 0;
}