#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            printf("I ");
            if((i&1)==0)
            {
                printf("love ");
            }
            else
            {
                printf("hate ");
            }
            if(i!=n)
            {
                printf("that ");
            }
            else
            {
                printf("it\n");
            }
        }
    }
    return 0;
}
