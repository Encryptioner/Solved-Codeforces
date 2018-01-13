#include <bits/stdc++.h>//Accepted at 4th attempt

using namespace std;

int main()
{
    int n,t,a[101],cnt=0,i,x;

    scanf("%d %d",&n,&t);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=86400-a[i];
        t=t-x;
        cnt++;
        //cout<<t<<" "<<cnt<<endl;
        if(t<=0)
        {
            break;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
