#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,i,j,cnt0=0,cnt00=0,cntd=0,ans;

    string n;

    cin>>n;
    l=n.length();

    scanf("%d",&k);

    for(i=0;i<l;i++)
    {
        if(n[i]=='0')
        {
            cnt0++;
        }
    }
    //cout<<cnt0<<endl;
    if(l<(k+1))
    {
        ans=l-1;
    }
    else if(cnt0<k)
    {
        ans=l-1;
    }
    else
    {
        for(i=l-1;i>=0;i--)
        {
            if(n[i]!='0')
            {
                cntd++;
            }
            else
            {
                cnt00++;
            }
            if(cnt00==k)
            {
                ans=cntd;
                break;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}

