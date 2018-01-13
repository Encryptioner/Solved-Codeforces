#include<bits/stdc++.h>

using namespace std;

int a[6],b[6];

int main()
{
    int n,x,y,i,j,sum=0;
    bool possible=true;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]+=1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        b[x]+=1;
    }
    for(i=1;i<=5;i++)
    {
        x=a[i]+b[i];
        if((x%2)!=0)
        {
            possible=false;
            break;
        }
        else
        {
            y=abs(a[i]-b[i]);
            y/=2;
            sum+=y;
        }
    }
    if(possible)
    {
        x=sum/2;
        printf("%d\n",x);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}

