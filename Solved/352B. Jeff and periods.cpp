#include<bits/stdc++.h>//Accepted after contest
#define MAX 100005//Codeforce 352B - Jeff and Periods
using namespace std;

int main()
{
    vector<int>G[MAX],S;
    bool vis[MAX],vis2[MAX];
    memset(vis,true,sizeof(vis));
    memset(vis2,false,sizeof(vis));

    int i,j,k,l,d1,d2,x,m,n,cnt;

    scanf("%d",&n);
    cnt=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(!vis2[x])
        {
            S.push_back(x);
            vis2[x]=true;
            cnt++;
            //cout<<"efg "<<x<<endl;
        }

        if(vis[x])
        {
        G[x].push_back(i);
        l=G[x].size();

        if(l>=3)
        {
            d1=G[x][l-1]-G[x][l-2];
            d2=G[x][l-2]-G[x][l-3];
            if(d1!=d2)
            {
                vis[x]=false;
                cnt--;

            }
        }
        }
    }
    sort(S.begin(),S.end());
    m=S.size();
    printf("%d\n",cnt);

    for(i=0;i<m;i++)
    {
        x=S[i];
        //cout<<"x "<<x<<" "<<vis[x]<<endl;
        if(vis[x])
        {
            l=G[x].size();
            //cout<<"L "<<l<<endl;
            if(l==1)
            {
                printf("%d %d\n",x,0);
            }
            else
            {
                printf("%d %d\n",x,G[x][l-1]-G[x][l-2]);
            }
        }
    }
    return 0;
}
