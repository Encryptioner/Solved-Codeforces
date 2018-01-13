#include<bits/stdc++.h>
#define lld long long int

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    lld i,j,n,b,x,cnt1=0,cnt2=0,max1=-1,min1=1000000009;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>b;
        if(b<=min1)
        {
            //cout<<"hel \n";
            if(b==min1)
            {
                cnt1++;
            }
            else
            {
                min1=b;
                cnt1=1;
            }
        }
        if(b>=max1)
        {
            //cout<<"hel2 \n";
            if(b==max1)
            {
                cnt2++;
            }
            else
            {
                max1=b;
                cnt2=1;
            }
        }
    }
    if(max1!=min1)
    {
        //cout<<min1<<" "<<max1<<endl;
        //cout<<cnt1<<" "<<cnt2<<endl;
        //printf("%d %lld\n",max1-min1,cnt1*cnt2);
        cout<<max1-min1<<" "<<cnt1*cnt2<<"\n";
    }
    else
    {
        //printf("0 %lld\n",(n*(n-1))/2);
        x=(n*(n-1))/2;
        cout<<"0 "<<x<<"\n";
    }
    return 0;
}
