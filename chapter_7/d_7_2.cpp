#include <cstdio>
#include <stack>

using namespace std;
const int MAXN = 1000 + 10;

int n, target[MAXN];

int main(int argc, char const *argv[])
{
    while(scanf("%d", &n) == 1)
    {
        stack<int> s;
        int A = 1, B = 1;
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &target[i]);
        }
        int ok = 1;
        while(B <= n)
        {
            if (A == target[B])     
            {
                /* code */
                A++;
                B++;

            }
            else if(!s.empty() && s.top() == target[B])
            {
                s.pop();
                B++;
            }
            else if(A <=n)
            {
                s.push(A++);
            }
            else
            {
                ok = 0;
                break;
            }
        }
        printf("%s\n", ok ? "Yes" : "No");
        return 0;
    }
    return 0;
}