#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", a[i]);
    }    
    printf("\n\n");
    memset(a,1,sizeof(int)*10);
    char *s = (char *)a;
    for (int i = 0; i < sizeof(int)*10; ++i)
    {
        printf("%d ", s[i]);
    } 
    printf("Hello world\r\n");
    return 0;
}