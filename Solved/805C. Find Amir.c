#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("%d\n",(n-2)/2);
    }
    else
    {
        printf("%d\n",(n-1)/2);
    }
    return 0;
}
