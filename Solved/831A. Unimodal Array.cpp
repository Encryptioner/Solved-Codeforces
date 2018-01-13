#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[101],i,j,pre=1001,x,y,n;
    bool ans=true,cons=false;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        x=a[i]-a[i-1];

        if(pre!=1001 && a[i]<pre){pre=a[i];}
        else if(pre!=1001){ans=false;break;}

        if(x<0){pre=a[i];}

        if(cons && x>0){ans=false;break;}

        if(x==0){cons=true;}
    }

    if(ans){printf("YES\n");}
    else{printf("NO\n");}

    return 0;
}
