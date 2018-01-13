#include<bits/stdc++.h>
#define lld long long int
using namespace std;


int main()
{
    lld mx=0,n,d,i,sum=0,val=0;
    scanf("%I64d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&d);
        sum+=d;
        val+=d;
        if(val<=0)
        {
            val=0;
        }
        else if(val>mx)
        {
            mx=val;
        }
    }
    val=sum-mx;
    //cout<<sum<<" "<<mx<<" "<<val<<endl;
    val*=-1;
    printf("%I64d\n",val+mx);

    return 0;
}
