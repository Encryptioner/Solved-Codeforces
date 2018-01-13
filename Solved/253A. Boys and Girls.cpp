#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,i,cnt;

    scanf("%d %d",&n,&m);
    cnt=n+m;

    while(cnt>0)
    {
        if(n>m)
        {
        if(n>0)
        {
            printf("B");
            n--;
            cnt--;
        }
        if(m>0)
        {
            printf("G");
            m--;
            cnt--;
        }
        }
        else
        {
        if(m>0)
        {
            printf("G");
            m--;
            cnt--;
        }
        if(n>0)
        {
            printf("B");
            n--;
            cnt--;
        }
        }
    }
    printf("\n");
    return 0;
}
