#include <bits/stdc++.h>//Accepted By Brute Force
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,x,s,i,j;
    vector<int>ans;

    scanf("%d %d",&a,&b);

    x=b;
    ans.push_back(x);
    while(x>=a)//we trace back from b to a if possible then yes
    {
        if( (x&1)== 0 )
        {
            x/=2;
            ans.push_back(x);//if it dividable by 2
        }
        else
        {
            if( ((x-1)%10) == 0 )//if odd, check if it is in 10*x+1 format
            {
                x=(x-1)/10;
                ans.push_back(x);
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
        if(x==a)//if b can be decreased to a
        {
            printf("YES\n");
            break;
        }
    }
    if(x<a)
    {
        printf("NO\n");
    }
    if(x==a)//printing a to b build up process
    {
        s=ans.size();
        printf("%d\n",s);
        for(i=s-1;i>0;i--)
        {
            printf("%d ",ans[i]);
        }
        printf("%d\n",ans[0]);
    }

    return 0;
}
