#include<bits/stdc++.h>
#define MAX 150009
#define lld long long int

using namespace std;

vector<int>G[MAX];
int vis[MAX];

int DFS(int i,lld & cnt_node,lld & cnt_edge)
{
    int s=G[i].size();
    vis[i]=1;
    cnt_node++;
    cnt_edge+=s;

    for(int j=0;j<s;j++)
    {
       int x=G[i][j];
       if(!vis[x])
       {
           DFS(x,cnt_node,cnt_edge);
       }
    }
}

int main()
{
    int i,j,n,m,a,b;
    lld cnt_node,cnt_edge;
    bool yes=true;

    scanf("%d %d",&n,&m);

    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cnt_edge=0;
            cnt_node=0;
            DFS(i,cnt_node,cnt_edge);

            //cout<<cnt_node<<" "<<cnt_edge<<endl;
            if( cnt_edge!=(cnt_node)*(cnt_node-1) )
            {
                printf("NO\n");
                yes=false;
                break;
            }
        }
    }
    if(yes)
    {
        printf("YES\n");
    }
    return 0;
}
