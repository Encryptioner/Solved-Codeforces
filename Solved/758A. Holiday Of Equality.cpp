#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,n) for(i=x;i<n;i++)
#define MAX 109

vector<int>G;

int main()
{
    int I,K,M,siz,x,y,val,c,t,n,MIN,ans;
    string str;
    bool vis;
    int arr[MAX];
    MIN=0;

    scanf("%d",&n);
    rep(I,0,n)
    {
        scanf("%d",&arr[I]);
        if(arr[I]>MIN)
        {
            MIN=arr[I];
        }
    }
    ans=0;
    rep(I,0,n)
    {
        ans+=MIN-arr[I];
    }
    printf("%d\n",ans);

    return 0;
}
