#include<bits/stdc++.h>

using namespace std;

int arr[100009];

int main()
{
    int n,i,j,x,cnt=0,maxc=-100000000;

    scanf("%d",&n);

    for(i=0;i<2*n;i++)
    {
        scanf("%d",&x);
        arr[x]+=1;
        if(arr[x]==1)
        {
            cnt+=1;
        }
        else
        {
            cnt-=1;
        }
        if(cnt>maxc)
        {
            maxc=cnt;
        }
    }
    printf("%d\n",maxc);
    return 0;
}
