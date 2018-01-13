#include <bits/stdc++.h>//Accepted
using namespace std;

#define rep(i,x,n) for(i=x;i<n;i++)

int main()
{
    int t,n,I,K,M,siz,a,beauty;
    vector<int>arr;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        rep(I,0,n)
        {
            scanf("%d",&a);
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        /*rep(I,0,n)
        {
            printf("%d",arr[I]);
        }*/
        beauty=0;
        rep(I,0,n/2)
        {
            beauty+=arr[n-1-I]-arr[I];
        }
        printf("%d\n",beauty);
        arr.clear();
    }
    return 0;
}
